//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface giftprodGiftUserHbTemplateViewInfo : NSObject
{
    NSString *_hbTemplateId;
    NSString *_templateName;
    NSString *_templateIconUrl;
    NSString *_templateThumbnail;
    NSString *_templateUrl;
    NSString *_templateUpUrl;
    NSString *_templateDownUrl;
    NSString *_templateFormUrl;
    NSString *_templateWithoutButtonUrl;
    NSString *_bgColor;
    NSString *_fontColor;
    NSString *_memo;
    NSString *_prodCode;
    NSDictionary *_extProperties;
    NSDate *_gmtCreate;
    NSDate *_gmtModified;
    NSString *_bizNo;
}

+ (Class)extPropertiesElementClass;
@property(retain, nonatomic) NSString *bizNo; // @synthesize bizNo=_bizNo;
@property(retain, nonatomic) NSDate *gmtModified; // @synthesize gmtModified=_gmtModified;
@property(retain, nonatomic) NSDate *gmtCreate; // @synthesize gmtCreate=_gmtCreate;
@property(retain, nonatomic) NSDictionary *extProperties; // @synthesize extProperties=_extProperties;
@property(retain, nonatomic) NSString *prodCode; // @synthesize prodCode=_prodCode;
@property(retain, nonatomic) NSString *memo; // @synthesize memo=_memo;
@property(retain, nonatomic) NSString *fontColor; // @synthesize fontColor=_fontColor;
@property(retain, nonatomic) NSString *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) NSString *templateWithoutButtonUrl; // @synthesize templateWithoutButtonUrl=_templateWithoutButtonUrl;
@property(retain, nonatomic) NSString *templateFormUrl; // @synthesize templateFormUrl=_templateFormUrl;
@property(retain, nonatomic) NSString *templateDownUrl; // @synthesize templateDownUrl=_templateDownUrl;
@property(retain, nonatomic) NSString *templateUpUrl; // @synthesize templateUpUrl=_templateUpUrl;
@property(retain, nonatomic) NSString *templateUrl; // @synthesize templateUrl=_templateUrl;
@property(retain, nonatomic) NSString *templateThumbnail; // @synthesize templateThumbnail=_templateThumbnail;
@property(retain, nonatomic) NSString *templateIconUrl; // @synthesize templateIconUrl=_templateIconUrl;
@property(retain, nonatomic) NSString *templateName; // @synthesize templateName=_templateName;
@property(retain, nonatomic) NSString *hbTemplateId; // @synthesize hbTemplateId=_hbTemplateId;
- (void).cxx_destruct;

@end
