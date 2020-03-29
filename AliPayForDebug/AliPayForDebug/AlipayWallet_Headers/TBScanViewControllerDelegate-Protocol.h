//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString, NSURL, UIImage, UIView;

@protocol TBScanViewControllerDelegate <NSObject>
- (void)didFind:(NSArray *)arg1;

@optional
- (void)buildCustomCameraPermissionAlert;
- (void)buildCustomAlbum;
- (void)buildContainerView:(UIView *)arg1;
- (void)dismissPopover;
- (void)scanPadPhotoFailed;
- (void)handleImage:(UIImage *)arg1 WithImageType:(int)arg2;
- (NSArray *)handleResultArray:(NSArray *)arg1;
- (void)showTorchView:(_Bool)arg1 shouldTurnOn:(_Bool)arg2;
- (void)alipayLog:(NSString *)arg1;
- (void)userTrack:(NSString *)arg1 args:(NSDictionary *)arg2;
- (void)userTrack:(NSString *)arg1;
- (void)detectedQRByAIAtScanFrameCount:(long long)arg1;
- (NSURL *)mlmodelcURLForAIDetect;
- (void)stableStatusChanged:(_Bool)arg1 AtScanFrameCount:(long long)arg2;
- (void)scanPhotoFailed;
- (void)setTorchState:(int)arg1;
- (void)releaseByMemoryWarning;
- (void)cameraStartFail;
- (void)frameDidReceived;
- (void)cameraDidStart;
- (void)cameraPermissionDenied;
@end
