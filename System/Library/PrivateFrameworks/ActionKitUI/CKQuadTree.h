//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKQuadTreeNode;

__attribute__((visibility("hidden")))
@interface CKQuadTree : NSObject
{
    CKQuadTreeNode *_rootNode;	// 8 = 0x8
}

- (void).cxx_destruct;	// IMP=0x000000000002ca80
@property(readonly, nonatomic) CKQuadTreeNode *rootNode; // @synthesize rootNode=_rootNode;
- (void)visit:(CDUnknownBlockType)arg1;	// IMP=0x000000000002ca60
- (id)initWithPoints:(id)arg1;	// IMP=0x000000000002c566
- (id)init;	// IMP=0x000000000002c552

@end

