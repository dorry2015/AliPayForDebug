//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CLFloatBubbleInteractModel, NSString;

@interface CLFloatBubbleModel : NSObject
{
    int _type;
    int _subType;
    NSString *_modelId;
    NSString *_iconUrl;
    NSString *_iconSchema;
    CDUnknownBlockType _iconClickCallBack;
    NSString *_descString;
    NSString *_schema;
    CLFloatBubbleInteractModel *_interactModel;
    unsigned long long _line;
    struct CGSize _descSize;
    struct CGSize _interactSize;
}

@property(nonatomic) struct CGSize interactSize; // @synthesize interactSize=_interactSize;
@property(nonatomic) struct CGSize descSize; // @synthesize descSize=_descSize;
@property(nonatomic) unsigned long long line; // @synthesize line=_line;
@property(retain, nonatomic) CLFloatBubbleInteractModel *interactModel; // @synthesize interactModel=_interactModel;
@property(copy, nonatomic) NSString *schema; // @synthesize schema=_schema;
@property(copy, nonatomic) NSString *descString; // @synthesize descString=_descString;
@property(copy, nonatomic) CDUnknownBlockType iconClickCallBack; // @synthesize iconClickCallBack=_iconClickCallBack;
@property(copy, nonatomic) NSString *iconSchema; // @synthesize iconSchema=_iconSchema;
@property(copy, nonatomic) NSString *iconUrl; // @synthesize iconUrl=_iconUrl;
@property(copy, nonatomic) NSString *modelId; // @synthesize modelId=_modelId;
@property(nonatomic) int subType; // @synthesize subType=_subType;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) double interactheight;
@property(readonly, nonatomic) double descHeight;
@property(readonly, nonatomic) double interactWidth;
@property(readonly, nonatomic) double descWidth;
- (void)preCalculateForMaxTextWidth:(double)arg1 font:(id)arg2;
- (id)init;

@end

