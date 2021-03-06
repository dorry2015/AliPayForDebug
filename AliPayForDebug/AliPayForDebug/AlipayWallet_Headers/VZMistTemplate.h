//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, VZMist;

@interface VZMistTemplate : NSObject
{
    _Bool _asyncDisplay;
    NSString *_tplId;
    NSString *_identifier;
    NSDictionary *_tplRawContent;
    NSDictionary *_tplParsedResult;
    NSDictionary *_initialState;
    NSDictionary *_data;
    NSDictionary *_actions;
    NSDictionary *_notifications;
    Class _tplControllerClass;
    id _tplReuseIdentifier;
    NSDictionary *_styles;
    NSString *_script;
    VZMist *_mistInstance;
    NSDictionary *_templatesMap;
}

@property(readonly, nonatomic) NSDictionary *templatesMap; // @synthesize templatesMap=_templatesMap;
@property(readonly, nonatomic) __weak VZMist *mistInstance; // @synthesize mistInstance=_mistInstance;
@property(readonly, nonatomic) NSString *script; // @synthesize script=_script;
@property(readonly, nonatomic) _Bool asyncDisplay; // @synthesize asyncDisplay=_asyncDisplay;
@property(retain, nonatomic) NSDictionary *styles; // @synthesize styles=_styles;
@property(readonly, nonatomic) id tplReuseIdentifier; // @synthesize tplReuseIdentifier=_tplReuseIdentifier;
@property(readonly, nonatomic) Class tplControllerClass; // @synthesize tplControllerClass=_tplControllerClass;
@property(readonly, nonatomic) NSDictionary *notifications; // @synthesize notifications=_notifications;
@property(readonly, nonatomic) NSDictionary *actions; // @synthesize actions=_actions;
@property(readonly, nonatomic) NSDictionary *data; // @synthesize data=_data;
@property(readonly, nonatomic) NSDictionary *initialState; // @synthesize initialState=_initialState;
@property(readonly, nonatomic) NSDictionary *tplParsedResult; // @synthesize tplParsedResult=_tplParsedResult;
@property(readonly, nonatomic) NSDictionary *tplRawContent; // @synthesize tplRawContent=_tplRawContent;
@property(readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) NSString *tplId; // @synthesize tplId=_tplId;
- (void).cxx_destruct;
- (id)initWithTemplateId:(id)arg1 content:(id)arg2 mistInstance:(id)arg3;
@property(readonly, nonatomic) _Bool o2o_accessibilityHidden;

@end

