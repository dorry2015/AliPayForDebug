//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ALPPassTabItem : NSObject
{
    _Bool _redPoint;
    NSString *_tabType;
    NSString *_defaultTitle;
    NSString *_noticeText;
    NSString *_noticeIcon;
    NSString *_passId;
    NSString *_templateId;
}

+ (id)instanceWithType:(id)arg1 title:(id)arg2;
+ (id)instanceWithDto:(id)arg1;
@property(retain, nonatomic) NSString *templateId; // @synthesize templateId=_templateId;
@property(retain, nonatomic) NSString *passId; // @synthesize passId=_passId;
@property(retain, nonatomic) NSString *noticeIcon; // @synthesize noticeIcon=_noticeIcon;
@property(retain, nonatomic) NSString *noticeText; // @synthesize noticeText=_noticeText;
@property(nonatomic) _Bool redPoint; // @synthesize redPoint=_redPoint;
@property(retain, nonatomic) NSString *defaultTitle; // @synthesize defaultTitle=_defaultTitle;
@property(retain, nonatomic) NSString *tabType; // @synthesize tabType=_tabType;
- (void).cxx_destruct;

@end

