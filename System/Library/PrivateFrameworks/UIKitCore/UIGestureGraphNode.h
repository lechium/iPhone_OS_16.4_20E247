//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMapTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface UIGestureGraphNode
{
    NSMutableSet *_inEdges;	// 8 = 0x8
    NSMutableSet *_outEdges;	// 16 = 0x10
    NSMutableSet *_inOutEdges;	// 24 = 0x18
    NSMapTable *_edgesByLabel;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0000000000832e17
- (id)_edgesForType:(unsigned long long)arg1 createIfNeeded:(_Bool)arg2;	// IMP=0x0000000000832da1
- (void)_removeEdge:(id)arg1;	// IMP=0x0000000000832ccc
- (void)_addEdge:(id)arg1;	// IMP=0x0000000000832b65
- (id)description;	// IMP=0x0000000000832a45
- (void)enumerateNeighborNodesUsingBlock:(CDUnknownBlockType)arg1;	// IMP=0x000000000083286b
@property(readonly, nonatomic) NSSet *inOutEdges;
@property(readonly, nonatomic) NSSet *outEdges;
@property(readonly, nonatomic) NSSet *inEdges;
@property(readonly, nonatomic) NSSet *allEdges;
- (id)edgesForLabel:(id)arg1;	// IMP=0x00000000008326ee
- (void)enumerateEdgesBetweenNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000083251f
- (void)enumerateEdgesFromNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x000000000083235a
- (void)enumerateEdgesTowardNode:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000832195
- (_Bool)isInOutEdge:(id)arg1;	// IMP=0x00000000008320df
- (_Bool)isOutEdge:(id)arg1;	// IMP=0x0000000000832080
- (_Bool)isInEdge:(id)arg1;	// IMP=0x0000000000832021
- (unsigned long long)typeOfEdge:(id)arg1;	// IMP=0x0000000000831fe1
- (_Bool)hasEdgeBetweenNode:(id)arg1;	// IMP=0x0000000000831e6d
- (_Bool)hasEdgeFromNode:(id)arg1;	// IMP=0x0000000000831d0e
- (_Bool)hasEdgeTowardNode:(id)arg1;	// IMP=0x0000000000831baf
- (unsigned long long)edgeCountForLabel:(id)arg1;	// IMP=0x0000000000831b4a
@property(readonly, nonatomic) unsigned long long edgeCount;

@end

