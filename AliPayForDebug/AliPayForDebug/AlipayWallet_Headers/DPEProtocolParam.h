//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface DPEProtocolParam : NSObject
{
    NSString *_hexData;
    NSString *_privateKey;
    NSString *_qrcode;
    NSString *_ticketType;
    NSString *_seatClass;
}

@property(retain, nonatomic) NSString *seatClass; // @synthesize seatClass=_seatClass;
@property(retain, nonatomic) NSString *ticketType; // @synthesize ticketType=_ticketType;
@property(retain, nonatomic) NSString *qrcode; // @synthesize qrcode=_qrcode;
@property(retain, nonatomic) NSString *privateKey; // @synthesize privateKey=_privateKey;
@property(retain, nonatomic) NSString *hexData; // @synthesize hexData=_hexData;
- (void).cxx_destruct;

@end
