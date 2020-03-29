//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OMistModel.h"

@class NSString;

@interface O2OSingleOrderWaitCommentListModel : O2OMistModel
{
    _Bool _hasNext;
    NSString *_orderId;
    NSString *_orderType;
    NSString *_lastId;
}

@property(nonatomic) _Bool hasNext; // @synthesize hasNext=_hasNext;
@property(copy, nonatomic) NSString *lastId; // @synthesize lastId=_lastId;
@property(retain, nonatomic) NSString *orderType; // @synthesize orderType=_orderType;
@property(copy, nonatomic) NSString *orderId; // @synthesize orderId=_orderId;
- (void).cxx_destruct;
- (id)handleWaitCommentListBlock:(id)arg1 response:(id)arg2 templateDownloadResult:(id)arg3;
- (id)responseObjects:(id)arg1 withTemplates:(id)arg2;
- (id)templatesFromResponse:(id)arg1;
- (id)templateConfig;
- (id)operationType;
- (SEL)selectorNameForRPCService;
- (Class)RPCServiceClass;
- (Class)RPCResponseClass;
- (Class)RPCRequestClass;
- (id)rpcRequest;
- (_Bool)hasMore;
- (void)reset;
- (_Bool)raise1002Exception;

@end
