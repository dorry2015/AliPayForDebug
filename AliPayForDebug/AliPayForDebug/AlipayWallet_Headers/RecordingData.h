//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSString;

@interface RecordingData : NSObject
{
    _Bool _hasNext;
    NSData *_data;
    NSString *_taskid;
}

+ (id)RecordingData:(id)arg1 TaskKey:(id)arg2 HasNext:(_Bool)arg3;
@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(retain, nonatomic) NSString *taskid; // @synthesize taskid=_taskid;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)init;

@end

