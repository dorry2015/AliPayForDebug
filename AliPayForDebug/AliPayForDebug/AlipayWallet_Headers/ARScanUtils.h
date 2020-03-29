//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface ARScanUtils : NSObject
{
}

+ (void)logLaunchSource:(id)arg1;
+ (void)downloadImage:(id)arg1 size:(struct CGSize)arg2 comlete:(CDUnknownBlockType)arg3;
+ (id)getLastLbsInfo:(id)arg1;
+ (_Bool)isIntelligentCompress:(id)arg1;
+ (unsigned long long)getLevelWithConfig:(int)arg1;
+ (void)compressImage:(id)arg1 complete:(CDUnknownBlockType)arg2;
+ (double)valueAfterScale:(double)arg1 minRatio:(double)arg2;
+ (double)valueAfterScale:(double)arg1;
+ (void)logJsLog:(id)arg1 key:(id)arg2 value:(id)arg3;
+ (void)logPerformance:(id)arg1 downTime:(long long)arg2 unpackTime:(long long)arg3 loadTime:(long long)arg4;
+ (void)logArRequest:(id)arg1 appId:(id)arg2;
+ (void)logOpenUrl:(id)arg1 appId:(id)arg2;
+ (long long)arServerTime;
+ (void)writeLogWithActionId:(id)arg1 extParams:(id)arg2 seed:(id)arg3;
+ (id)imageFromSampleBuffer:(struct __CVBuffer *)arg1;
+ (id)sortedFilesByDate:(id)arg1 fileAttributesDict:(id *)arg2;
+ (id)listDirFiles:(id)arg1 withSuffix:(id)arg2;
+ (void)executeBlock:(CDUnknownBlockType)arg1 after:(double)arg2 when:(CDUnknownBlockType)arg3;
+ (id)ARScanDocumentPath;
+ (void)startLocationWithCompletion:(CDUnknownBlockType)arg1;

@end
