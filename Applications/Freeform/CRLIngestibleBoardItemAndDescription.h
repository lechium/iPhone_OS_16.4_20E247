//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, _TtC8Freeform12CRLBoardItem;

@interface CRLIngestibleBoardItemAndDescription : NSObject
{
    _TtC8Freeform12CRLBoardItem *_boardItem;	// 8 = 0x8
    NSDictionary *_ingestibleDescription;	// 16 = 0x10
}

+ (id)ingestibleBoardItemAndDescriptionWithBoardItems:(id)arg1 descriptions:(id)arg2;	// IMP=0x00400000001b1a20
+ (id)ingestibleBoardItemAndDescriptionWithBoardItem:(id)arg1 description:(id)arg2;	// IMP=0x00100000001b19b4
- (void).cxx_destruct;	// IMP=0x00200000001b2231
@property(readonly, nonatomic) NSDictionary *ingestibleDescription; // @synthesize ingestibleDescription=_ingestibleDescription;
@property(readonly, nonatomic) _TtC8Freeform12CRLBoardItem *boardItem; // @synthesize boardItem=_boardItem;
- (id)init;	// IMP=0x00100000001b1f35
- (id)initWithBoardItem:(id)arg1 description:(id)arg2;	// IMP=0x00100000001b1e9c

@end

