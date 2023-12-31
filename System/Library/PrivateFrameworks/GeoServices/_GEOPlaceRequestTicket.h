//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "GEOAbstractMapServiceTicket.h"

@class GEOPDPlaceRequest, GEOPDPlaceResponse;
@protocol GEOMapItem;

__attribute__((visibility("hidden")))
@interface _GEOPlaceRequestTicket : GEOAbstractMapServiceTicket
{
    GEOPDPlaceRequest *_request;	// 256 = 0x100
    id _requestToken;	// 264 = 0x108
    GEOPDPlaceResponse *_response;	// 272 = 0x110
    id <GEOMapItem> _mapItemToRefine;	// 280 = 0x118
    CDUnknownBlockType _preSubmitUpdateRequestBlock;	// 288 = 0x120
    CDUnknownBlockType _retryRequestForErrorBlock;	// 296 = 0x128
}

- (void).cxx_destruct;	// IMP=0x000000000076cf96
- (CDStruct_d1a7ebee)dataRequestKind;	// IMP=0x000000000076cf04
- (id)resultSectionHeader;	// IMP=0x000000000076ce70
- (void)applyToPlaceInfo:(id)arg1;	// IMP=0x000000000076cdff
- (void)applyToCorrectedSearch:(id)arg1;	// IMP=0x000000000076cd8e
- (void)cancel;	// IMP=0x000000000076cd11
- (void)submitWithRefinedHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x000000000076c84d
- (void)submitWithHandler:(CDUnknownBlockType)arg1 auditToken:(id)arg2 timeout:(long long)arg3 networkActivity:(CDUnknownBlockType)arg4;	// IMP=0x000000000076c1cf
- (void)_processRequest:(id)arg1 auditToken:(id)arg2 timeout:(double)arg3 withHandler:(CDUnknownBlockType)arg4 refinedHandler:(CDUnknownBlockType)arg5 networkActivity:(CDUnknownBlockType)arg6;	// IMP=0x00000000007696d8
- (id)description;	// IMP=0x00000000007694c5
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3 preSubmitUpdateRequestBlock:(CDUnknownBlockType)arg4 retryForErrorBlock:(CDUnknownBlockType)arg5;	// IMP=0x00000000007693a6
- (id)initWithRequest:(id)arg1 traits:(id)arg2 mapItemToRefine:(id)arg3;	// IMP=0x0000000000769380
- (id)initWithRequest:(id)arg1 traits:(id)arg2 preSubmitUpdateRequestBlock:(CDUnknownBlockType)arg3 retryForErrorBlock:(CDUnknownBlockType)arg4;	// IMP=0x0000000000769358
- (id)initWithRequest:(id)arg1 traits:(id)arg2;	// IMP=0x000000000076932f
- (id)initWithTraits:(id)arg1;	// IMP=0x0000000000769300

@end

