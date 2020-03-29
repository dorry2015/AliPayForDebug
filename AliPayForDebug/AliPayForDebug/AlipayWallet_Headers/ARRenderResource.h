//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "ARJsBridgeDelegate-Protocol.h"
#import "ARScanMonitorViewDelegate-Protocol.h"
#import "Ant3DViewDelegate-Protocol.h"

@class ARMultimediaRecordManager, ARParConfig, ARProgressIndicatorView, ARRenderBridge, ARScanMonitorView, Ant3DCameraController, Ant3DParBundle, Ant3DView, NSDictionary, NSString, UIImage, UIImageView, UIView, UIVisualEffectView;
@protocol ARRenderCameraDelegate, ARRenderControllerDelegate, OS_dispatch_semaphore;

@interface ARRenderResource : NSObject <ARJsBridgeDelegate, ARScanMonitorViewDelegate, Ant3DViewDelegate>
{
    _Bool _showCamSwitchBtn;
    _Bool _cameraBlurEnabled;
    long long _parFileSize;
    long long _parDownloadCost;
    long long _parUnpackCost;
    long long _parLoadCost;
    double _sceneLoadStart;
    double _maxRecordDuration;
    int _entryCameraFacing;
    _Bool _recordShouldFirstTips;
    _Bool _isExclusive;
    _Bool _shouldSnapImage;
    unsigned long long _type;
    long long _renderResourceState;
    ARParConfig *_resourceConfig;
    NSString *_resSizeString;
    NSString *_resVersionString;
    NSDictionary *_bizVars;
    NSString *_cloudId;
    NSString *_cloudMD5;
    NSString *_resAppId;
    long long _resourceId;
    NSString *_openAppId;
    NSString *_parPath;
    NSString *_resPath;
    NSString *_trackModelPath;
    unsigned long long _picTrackType;
    Ant3DParBundle *_parBundle;
    ARProgressIndicatorView *_indicator;
    Ant3DView *_render3DView;
    Ant3DCameraController *_ant3DCamera;
    unsigned long long _schemaCamFacing;
    ARScanMonitorView *_monitorView;
    ARMultimediaRecordManager *_recordingManager;
    UIImageView *_blurBgImageView;
    UIVisualEffectView *_effectView;
    unsigned long long _mode;
    id <ARRenderControllerDelegate> _delegate;
    id <ARRenderCameraDelegate> _cameraDelegate;
    ARRenderBridge *_renderBridge;
    UIImage *_bufferImage;
    NSObject<OS_dispatch_semaphore> *_blurImageViewSemaphore;
}

+ (id)renderResourceFromPar:(id)arg1;
+ (id)renderResourceFromPB:(id)arg1 camFacing:(unsigned long long)arg2;
@property(nonatomic) _Bool shouldSnapImage; // @synthesize shouldSnapImage=_shouldSnapImage;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *blurImageViewSemaphore; // @synthesize blurImageViewSemaphore=_blurImageViewSemaphore;
@property(retain, nonatomic) UIImage *bufferImage; // @synthesize bufferImage=_bufferImage;
@property(retain, nonatomic) ARRenderBridge *renderBridge; // @synthesize renderBridge=_renderBridge;
@property(nonatomic) __weak id <ARRenderCameraDelegate> cameraDelegate; // @synthesize cameraDelegate=_cameraDelegate;
@property(nonatomic) __weak id <ARRenderControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool isExclusive; // @synthesize isExclusive=_isExclusive;
@property(nonatomic) unsigned long long mode; // @synthesize mode=_mode;
@property(retain, nonatomic) UIVisualEffectView *effectView; // @synthesize effectView=_effectView;
@property(retain, nonatomic) UIImageView *blurBgImageView; // @synthesize blurBgImageView=_blurBgImageView;
@property(nonatomic) _Bool recordShouldFirstTips; // @synthesize recordShouldFirstTips=_recordShouldFirstTips;
@property(retain, nonatomic) ARMultimediaRecordManager *recordingManager; // @synthesize recordingManager=_recordingManager;
@property(retain, nonatomic) ARScanMonitorView *monitorView; // @synthesize monitorView=_monitorView;
@property(nonatomic) unsigned long long schemaCamFacing; // @synthesize schemaCamFacing=_schemaCamFacing;
@property(retain, nonatomic) Ant3DCameraController *ant3DCamera; // @synthesize ant3DCamera=_ant3DCamera;
@property(retain, nonatomic) Ant3DView *render3DView; // @synthesize render3DView=_render3DView;
@property(retain, nonatomic) ARProgressIndicatorView *indicator; // @synthesize indicator=_indicator;
@property(retain, nonatomic) Ant3DParBundle *parBundle; // @synthesize parBundle=_parBundle;
@property(nonatomic) unsigned long long picTrackType; // @synthesize picTrackType=_picTrackType;
@property(copy, nonatomic) NSString *trackModelPath; // @synthesize trackModelPath=_trackModelPath;
@property(copy, nonatomic) NSString *resPath; // @synthesize resPath=_resPath;
@property(copy, nonatomic) NSString *parPath; // @synthesize parPath=_parPath;
@property(retain, nonatomic) NSString *openAppId; // @synthesize openAppId=_openAppId;
@property(nonatomic) long long resourceId; // @synthesize resourceId=_resourceId;
@property(retain, nonatomic) NSString *resAppId; // @synthesize resAppId=_resAppId;
@property(copy, nonatomic) NSString *cloudMD5; // @synthesize cloudMD5=_cloudMD5;
@property(copy, nonatomic) NSString *cloudId; // @synthesize cloudId=_cloudId;
@property(copy, nonatomic) NSDictionary *bizVars; // @synthesize bizVars=_bizVars;
@property(copy, nonatomic) NSString *resVersionString; // @synthesize resVersionString=_resVersionString;
@property(copy, nonatomic) NSString *resSizeString; // @synthesize resSizeString=_resSizeString;
@property(retain, nonatomic) ARParConfig *resourceConfig; // @synthesize resourceConfig=_resourceConfig;
@property(nonatomic) long long renderResourceState; // @synthesize renderResourceState=_renderResourceState;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (long long)engineFPS;
- (long long)parLoadTime;
- (long long)parUnpackTime;
- (long long)parDownTime;
- (long long)parSize;
- (void)onUninit:(_Bool)arg1;
- (void)afterOpenUrl;
- (_Bool)shouldShowCamSwitch;
- (id)currentCameraSource;
- (_Bool)isCurrentAn3dCamera;
- (_Bool)recordNeedCamera;
- (void)didCameraChange:(long long)arg1;
- (long long)deviceCameraPosition;
- (void)switchCameraWithPosition:(long long)arg1 competion:(CDUnknownBlockType)arg2;
- (void)onDeviceShake;
- (void)didExitArAnimation;
- (void)trackStateChanged:(unsigned long long)arg1 trackedNodes:(id)arg2;
- (long long)entryCameraPostion;
- (_Bool)slamRangeTrack;
- (long long)faceTrackMaxNum;
- (_Bool)shouldStartFaceTrack;
- (_Bool)shouldStartRecognizeTrack;
- (_Bool)isSlamSessionOn;
- (_Bool)ant3DCameraSessionOn;
- (void)startAnt3DCamera;
- (id)setupRecordingManagerWithStatus:(unsigned long long)arg1;
- (id)setupRecordingManager;
- (void)startRecordView;
- (void)stopBlurViewAnimation;
- (void)startBlureViewAnimation;
- (void)previewWatermarkOnRenderView:(id)arg1;
- (void)showAlertViewMessage:(id)arg1 comfirmTitle:(id)arg2 comfirmBlock:(CDUnknownBlockType)arg3 cancleBlock:(CDUnknownBlockType)arg4;
- (void)onEvent:(id)arg1 extra:(id)arg2;
- (CDStruct_ca286a4d)onFileLoad:(id)arg1 mode:(id)arg2;
- (void)onCameraStarted:(_Bool)arg1;
- (void)onJsLoaded;
- (void)onFirstFrame;
- (void)onAnimationEnd:(id)arg1;
- (void)onAnimationBegin:(id)arg1;
- (void)onCameraStopped:(_Bool)arg1;
- (void)onSceneTap:(id)arg1;
- (void)onInitError:(id)arg1;
- (id)detectResourceIn:(id)arg1 withSuffix:(id)arg2;
- (id)detectVideoResource:(id)arg1;
- (id)detectAnimationResource:(id)arg1;
- (id)detectSceneResource:(id)arg1;
- (void)startRenderBridge:(id)arg1 inView:(id)arg2;
- (id)getDeviceScreen;
- (id)getDeviceModel;
- (unsigned long long)currTrackAttitude;
- (void)setMarkerTrackModel:(id)arg1;
- (_Bool)isMarkerTrackModelOk;
- (id)createTrackConfiguration:(unsigned long long)arg1;
- (void)initTrackMode;
- (void)startAnimationInView:(id)arg1;
- (void)showUncompatiableAlert;
- (void)processParFile:(id)arg1 inView:(id)arg2;
- (void)downloadModelWithSuperView:(id)arg1;
- (void)startRenderInView:(id)arg1;
@property(readonly, nonatomic) UIView *currentRenderView;
- (_Bool)validatePar:(id)arg1 withMD5:(id)arg2;
- (id)recRootPath;
- (id)parRootPath;
- (id)resRootPath;
- (id)rootPath;
- (void)cleanRenderView;
- (void)stopRender:(CDUnknownBlockType)arg1;
- (void)realDealloc;
- (void)dealloc;
- (_Bool)shouldShapImage;
- (void)handleBufferToSnapImage:(struct __CVBuffer *)arg1;
- (void)recievedCameraFrame:(id)arg1;
- (id)init;
- (_Bool)isSameResourceOnForPb:(id)arg1;
- (_Bool)isSameResourceOnForPar:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
