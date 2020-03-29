//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "KBCONTENTPRODNativeBlock.h"

@class DTBoolean, NSArray, NSSet, NSString;

@interface KBCONTENTPRODArticleBlock : KBCONTENTPRODNativeBlock
{
    _Bool _hasVideo;
    NSString *_articleId;
    NSString *_title;
    NSString *_authorName;
    NSString *_authorLogo;
    NSString *_authorHomeUrl;
    NSArray *_images;
    NSString *_tag;
    NSString *_readCount;
    NSString *_likeNum;
    NSString *_content;
    NSString *_jumpUrl;
    NSString *_shopName;
    NSString *_mall;
    NSString *_classification;
    NSString *_contentAccountId;
    NSString *_publicMsgId;
    NSString *_createTime;
    NSSet *_words;
    NSArray *_menus;
    DTBoolean *_hasCollect;
}

+ (Class)menusElementClass;
+ (Class)wordsElementClass;
+ (Class)imagesElementClass;
@property(retain, nonatomic) DTBoolean *hasCollect; // @synthesize hasCollect=_hasCollect;
@property(retain, nonatomic) NSArray *menus; // @synthesize menus=_menus;
@property(retain, nonatomic) NSSet *words; // @synthesize words=_words;
@property(retain, nonatomic) NSString *createTime; // @synthesize createTime=_createTime;
@property(retain, nonatomic) NSString *publicMsgId; // @synthesize publicMsgId=_publicMsgId;
@property(retain, nonatomic) NSString *contentAccountId; // @synthesize contentAccountId=_contentAccountId;
@property(retain, nonatomic) NSString *classification; // @synthesize classification=_classification;
@property(retain, nonatomic) NSString *mall; // @synthesize mall=_mall;
@property(retain, nonatomic) NSString *shopName; // @synthesize shopName=_shopName;
@property(retain, nonatomic) NSString *jumpUrl; // @synthesize jumpUrl=_jumpUrl;
@property(nonatomic) _Bool hasVideo; // @synthesize hasVideo=_hasVideo;
@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *likeNum; // @synthesize likeNum=_likeNum;
@property(retain, nonatomic) NSString *readCount; // @synthesize readCount=_readCount;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSArray *images; // @synthesize images=_images;
@property(retain, nonatomic) NSString *authorHomeUrl; // @synthesize authorHomeUrl=_authorHomeUrl;
@property(retain, nonatomic) NSString *authorLogo; // @synthesize authorLogo=_authorLogo;
@property(retain, nonatomic) NSString *authorName; // @synthesize authorName=_authorName;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *articleId; // @synthesize articleId=_articleId;
- (void).cxx_destruct;

@end
