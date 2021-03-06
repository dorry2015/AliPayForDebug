//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface APFunctionCoverage : NSObject
{
    _Bool _isNeedToRunCoverage;
    unsigned long long _maxSizeForCoverage;
    NSString *_dumpBasePath;
}

+ (id)isOpenFunctionCoverage;
+ (id)sharedInstance;
@property(retain, nonatomic) NSString *dumpBasePath; // @synthesize dumpBasePath=_dumpBasePath;
@property(nonatomic) unsigned long long maxSizeForCoverage; // @synthesize maxSizeForCoverage=_maxSizeForCoverage;
@property(nonatomic) _Bool isNeedToRunCoverage; // @synthesize isNeedToRunCoverage=_isNeedToRunCoverage;
- (void).cxx_destruct;
- (void)uploadFileToServer;
- (void)asyncDumpFunctionCoverageToFile;
- (void)setupByConfig;
- (void)setupByDefault;
- (void)start;
- (void)setNeedRunFlag;
- (void)didEnterBackground:(id)arg1;
- (void)dealloc;
- (id)init;

@end

