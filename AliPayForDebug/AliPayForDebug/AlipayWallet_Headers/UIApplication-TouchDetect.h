//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIApplication.h>

@interface UIApplication (TouchDetect)
- (_Bool)isMiniAppPage:(id)arg1;
- (struct CGPoint)adaptCoodinate:(struct CGPoint)arg1 view:(id)arg2 scrollView:(id)arg3 viewId:(id)arg4;
- (_Bool)shouldFilterView:(id)arg1 viewId:(id)arg2;
- (void)reportH5CoordinateForTouch:(id)arg1 event:(id)arg2;
- (unsigned long long)pointTypeForNativeCoordinate:(struct CGPoint)arg1 event:(id)arg2;
- (struct CGPoint)calculateNativeCoordinateForTouch:(id)arg1;
- (void)reportCoordinate:(struct CGPoint)arg1 pointType:(unsigned long long)arg2;
- (void)processCoordinateFromEvent:(id)arg1;
- (void)setPreviousTouchPhase:(id)arg1;
- (id)previousTouchPhase;
- (void)afw_heatMap_sendEvent:(id)arg1;
@end
