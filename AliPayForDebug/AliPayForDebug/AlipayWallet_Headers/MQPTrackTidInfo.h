//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCoding-Protocol.h"

@class NSString;

@interface MQPTrackTidInfo : NSObject <NSCoding>
{
    NSString *_tid;
    NSString *_utdid;
    NSString *_uid;
    NSString *_sessionId;
    NSString *_imsi;
    NSString *_imei;
}

@property(copy, nonatomic) NSString *imei; // @synthesize imei=_imei;
@property(copy, nonatomic) NSString *imsi; // @synthesize imsi=_imsi;
@property(copy, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
@property(copy, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(copy, nonatomic) NSString *utdid; // @synthesize utdid=_utdid;
@property(copy, nonatomic) NSString *tid; // @synthesize tid=_tid;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;

@end

