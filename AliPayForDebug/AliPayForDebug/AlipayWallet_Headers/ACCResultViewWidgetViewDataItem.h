//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class ACCSubServiceWidgetDetailDefaultAction, NSString;

@interface ACCResultViewWidgetViewDataItem : NSObject
{
    NSString *_leftTitle;
    NSString *_tag;
    NSString *_tagColor;
    NSString *_itemType;
    unsigned long long _actionType;
    NSString *_actionUrl;
    ACCSubServiceWidgetDetailDefaultAction *_alertAction;
    NSString *_rightDesc;
}

@property(retain, nonatomic) NSString *rightDesc; // @synthesize rightDesc=_rightDesc;
@property(retain, nonatomic) ACCSubServiceWidgetDetailDefaultAction *alertAction; // @synthesize alertAction=_alertAction;
@property(retain, nonatomic) NSString *actionUrl; // @synthesize actionUrl=_actionUrl;
@property(nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) NSString *itemType; // @synthesize itemType=_itemType;
@property(retain, nonatomic) NSString *tagColor; // @synthesize tagColor=_tagColor;
@property(retain, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(retain, nonatomic) NSString *leftTitle; // @synthesize leftTitle=_leftTitle;
- (void).cxx_destruct;

@end

