//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "Ant3DDetector.h"

@interface Ant3DHandKeyPointDetector : Ant3DDetector
{
}

+ (_Bool)isSupported;
+ (id)instanceWithAppId:(id)arg1 business:(id)arg2;
- (id)getJsonStringResult;
- (float)getScoreWithId:(unsigned long long)arg1;
- (void)detectPixelBuffer:(struct __CVBuffer *)arg1 resultBlock:(CDUnknownBlockType)arg2 pixelBuffer:(CDUnknownBlockType)arg3;
- (void)setUpConfigOption:(id)arg1;
- (unsigned long long)status;
- (void)dealloc;

@end

