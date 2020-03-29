//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "YTCoreSchemePlayerView.h"

@class CADisplayLink, CAEAGLLayer, EAGLContext, NSDate, NSObject, NSRecursiveLock, NSString, NSThread, NSTimer;
@protocol OS_dispatch_semaphore, YTCoreSoftwarePlayerDelegate;

@interface YTCoreSoftwarePlayerView : YTCoreSchemePlayerView
{
    CAEAGLLayer *_eaglLayer;
    EAGLContext *_context;
    unsigned int _renderBuffer;
    unsigned int _frameBuffer;
    struct CGRect mSelfBounds;
    struct CGRect mLastFrame;
    unsigned long long mGravity;
    float mUIScale;
    _Bool mNeedRizeLater;
    _Bool mSpheerAsyncRender;
    _Bool _asyncRender;
    NSTimer *_displayTimer;
    CADisplayLink *_displayLink;
    NSThread *_renderThread;
    NSObject<OS_dispatch_semaphore> *_glLock;
    NSDate *_lastRender;
    NSRecursiveLock *_glActiveLock;
    _Bool _isFullScreen;
    _Bool mSpheer;
    _Bool _actived;
    _Bool _isVideoCapture;
    _Bool _useTextureCache;
    _Bool _needRenderbufferStorage;
    _Bool _appWillResignActive;
    _Bool _needSnapshot;
    int _backingWidth;
    int _backingHeight;
    id <YTCoreSoftwarePlayerDelegate> _delegate;
    unsigned long long _subtitleChannel;
    NSString *_snapshotNotificationKey;
    struct CGSize _videoSize;
    struct CGSize _snapshotSize;
}

@property(copy, nonatomic) NSString *snapshotNotificationKey; // @synthesize snapshotNotificationKey=_snapshotNotificationKey;
@property(nonatomic) struct CGSize snapshotSize; // @synthesize snapshotSize=_snapshotSize;
@property(nonatomic) _Bool needSnapshot; // @synthesize needSnapshot=_needSnapshot;
@property _Bool appWillResignActive; // @synthesize appWillResignActive=_appWillResignActive;
@property _Bool needRenderbufferStorage; // @synthesize needRenderbufferStorage=_needRenderbufferStorage;
@property(nonatomic) struct CGSize videoSize; // @synthesize videoSize=_videoSize;
@property(nonatomic) unsigned long long subtitleChannel; // @synthesize subtitleChannel=_subtitleChannel;
@property(readonly, getter=isUseTextureCache) _Bool useTextureCache; // @synthesize useTextureCache=_useTextureCache;
@property(nonatomic) _Bool isVideoCapture; // @synthesize isVideoCapture=_isVideoCapture;
@property(nonatomic) _Bool actived; // @synthesize actived=_actived;
@property(nonatomic) int backingHeight; // @synthesize backingHeight=_backingHeight;
@property(nonatomic) int backingWidth; // @synthesize backingWidth=_backingWidth;
@property(nonatomic) __weak id <YTCoreSoftwarePlayerDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)spheer;
- (void).cxx_destruct;
- (void)seek;
- (void)pause;
- (void)play;
- (void)unlock;
- (_Bool)lock;
- (void)p_initParam;
- (long long)getEAGLContext;
- (void)appBecomeActive:(id)arg1;
- (void)appResignActive:(id)arg1;
- (void)removeNotification;
- (void)addNotification;
- (void)snapShotOneWithSize:(struct CGSize)arg1 andNotificationKey:(id)arg2;
- (id)getUIImageFromLayer;
- (_Bool)isFullScreen;
- (struct CGRect)getRectInGravityResizeAspectFullMode;
- (struct CGRect)getRectInGravityResizeAspectMode;
- (struct CGRect)getRectInGravityAspectMode;
- (struct CGRect)getRectInGravityResizeMode;
- (struct CGPoint)getViewPortOrigin:(double)arg1 Height:(double)arg2;
- (struct CGRect)getResizeRect;
- (struct CGRect)videoInsideRect;
- (struct CGRect)absoluteRectFromRelativeRect:(struct CGRect)arg1;
- (struct CGRect)getLastFrame;
- (id)eaglLayer;
- (void)resizeEAGLLayer;
- (void)videoStartCallBack;
- (struct CGRect)eaglFrameRect;
- (void)dealloc;
- (void)deinit;
- (void)setFocusGravity:(unsigned long long)arg1;
- (void)setGravity:(unsigned long long)arg1;
- (unsigned long long)gravity;
- (void)layoutSubviews;
- (void)setSpheer:(_Bool)arg1;
- (void)displayPush;
- (void)cleanBuffer;
- (void)setupBuffer;
- (void)getRenderbufferParameterivRect;
- (int)displayPrepare;
- (void)setupFrameBuffer;
- (void)setupRenderBuffer;
- (void)setupContext;
- (void)setupLayer;
- (unsigned int)getRenderBuffer;
- (id)context;
- (id)gLock;
- (void)displayLinkSel;
- (void)renderThreadSel;
- (void)configAsyncRender;
- (id)initWithFrame:(struct CGRect)arg1;

@end
