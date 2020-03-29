//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GIFTPRODToString.h"

@class GIFTPRODLocation, NSArray, NSDictionary, NSString;

@interface GIFTPRODGiftCrowdCreateReq : GIFTPRODToString
{
    _Bool _withStars;
    int _perNum;
    int _count;
    NSString *_remark;
    NSString *_prodCode;
    long long _perAmount;
    long long _totalAmount;
    NSArray *_inviteUserList;
    NSDictionary *_extInfo;
    GIFTPRODLocation *_location;
    NSString *_picId;
    NSString *_limit;
}

+ (Class)extInfoElementClass;
+ (Class)inviteUserListElementClass;
@property(retain, nonatomic) NSString *limit; // @synthesize limit=_limit;
@property(retain, nonatomic) NSString *picId; // @synthesize picId=_picId;
@property(retain, nonatomic) GIFTPRODLocation *location; // @synthesize location=_location;
@property(retain, nonatomic) NSDictionary *extInfo; // @synthesize extInfo=_extInfo;
@property(nonatomic) _Bool withStars; // @synthesize withStars=_withStars;
@property(retain, nonatomic) NSArray *inviteUserList; // @synthesize inviteUserList=_inviteUserList;
@property(nonatomic) long long totalAmount; // @synthesize totalAmount=_totalAmount;
@property(nonatomic) int count; // @synthesize count=_count;
@property(nonatomic) long long perAmount; // @synthesize perAmount=_perAmount;
@property(nonatomic) int perNum; // @synthesize perNum=_perNum;
@property(retain, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(retain, nonatomic) NSString *remark; // @synthesize remark=_remark;
- (void).cxx_destruct;

@end
