//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class APCustomStorage;
@protocol APDAOProtocol;

@interface APChatMessageStore : NSObject
{
    APCustomStorage *_storage;
    id <APDAOProtocol> _messageProxy;
}

@property(retain, nonatomic) id <APDAOProtocol> messageProxy; // @synthesize messageProxy=_messageProxy;
@property(retain, nonatomic) APCustomStorage *storage; // @synthesize storage=_storage;
- (void).cxx_destruct;

@end
