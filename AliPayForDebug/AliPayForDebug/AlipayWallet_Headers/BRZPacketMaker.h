//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol BRZPacketMakerDelagete;

@interface BRZPacketMaker : NSObject
{
    _Bool _encrypt;
    id <BRZPacketMakerDelagete> _delegate;
    NSMutableArray *_frameBufferArray;
    unsigned long long _msgId;
}

@property(nonatomic) unsigned long long msgId; // @synthesize msgId=_msgId;
@property(retain, nonatomic) NSMutableArray *frameBufferArray; // @synthesize frameBufferArray=_frameBufferArray;
@property(nonatomic) __weak id <BRZPacketMakerDelagete> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool encrypt; // @synthesize encrypt=_encrypt;
- (void).cxx_destruct;
- (id)buildFilePackets:(id)arg1 fromPosition:(unsigned int)arg2 packetsCount:(unsigned long long)arg3;
- (id)buildFilePackets:(id)arg1 fromPosition:(unsigned int)arg2 length:(unsigned long long)arg3;
- (_Bool)doEncrypt:(unsigned long long)arg1;
- (_Bool)isOtaCmd:(unsigned long long)arg1;
- (id)buildDataPackets:(id)arg1 cmd:(long long)arg2;
- (void)processReceivedData:(id)arg1;
- (unsigned long long)increaseMsgId;
- (id)initWithDelegate:(id)arg1;

@end
