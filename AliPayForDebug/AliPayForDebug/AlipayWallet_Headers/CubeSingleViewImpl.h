//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CubeViewImpl.h"

@class NSString;

@interface CubeSingleViewImpl : CubeViewImpl
{
    NSString *_jsfmError;
}

@property(copy, nonatomic) NSString *jsfmError; // @synthesize jsfmError=_jsfmError;
- (void).cxx_destruct;
- (id)appInstanceIDWithPageInstanceId:(id)arg1;
- (void)dealloc;
- (void)sendViewEvent:(id)arg1 params:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)initWithContainer:(id)arg1 bundleURL:(id)arg2 bundleJS:(id)arg3 viewOption:(id)arg4 instanceOption:(id)arg5 engine:(id)arg6;

@end
