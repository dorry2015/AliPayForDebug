//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSTimer;

@interface IDPredictSceneModel : NSObject
{
    _Bool _enable;
    _Bool _report;
    _Bool _isTimeoutAlready;
    long long _timeout;
    long long _delay;
    NSString *_sceneCode;
    NSTimer *_timeoutTimer;
    NSArray *_bioTypeArray;
}

@property(retain, nonatomic) NSArray *bioTypeArray; // @synthesize bioTypeArray=_bioTypeArray;
@property(nonatomic) _Bool isTimeoutAlready; // @synthesize isTimeoutAlready=_isTimeoutAlready;
@property(retain, nonatomic) NSTimer *timeoutTimer; // @synthesize timeoutTimer=_timeoutTimer;
@property(nonatomic) _Bool report; // @synthesize report=_report;
@property(copy, nonatomic) NSString *sceneCode; // @synthesize sceneCode=_sceneCode;
@property(nonatomic) long long delay; // @synthesize delay=_delay;
@property(nonatomic) long long timeout; // @synthesize timeout=_timeout;
@property(nonatomic) _Bool enable; // @synthesize enable=_enable;
- (void).cxx_destruct;
- (void)clearTimeoutTimer;

@end

