//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCOMMENTToString.h"

@class NSDictionary, NSString;

@interface KBCOMMENTDynamicBlockInstance : KBCOMMENTToString
{
    NSString *_blockId;
    NSString *_blockName;
    NSString *_type;
    NSString *_templateName;
    NSString *_templateInfo;
    NSDictionary *_data;
}

+ (Class)dataElementClass;
@property(retain, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *templateInfo; // @synthesize templateInfo=_templateInfo;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *blockName; // @synthesize blockName=_blockName;
@property(retain, nonatomic) NSString *blockId; // @synthesize blockId=_blockId;
- (void).cxx_destruct;

@end

