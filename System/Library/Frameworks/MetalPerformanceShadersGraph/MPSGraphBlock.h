//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MPSGraphOperation, MPSGraphRegion, NSMutableArray;

@interface MPSGraphBlock : NSObject
{
    MPSGraphOperation *_terminator;	// 8 = 0x8
    NSMutableArray *_blockOperations;	// 16 = 0x10
    void *_mlirBlock;	// 24 = 0x18
    MPSGraphRegion *_parentRegion;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x000000000001c406
- (id)parentOp;	// IMP=0x000000000001c3d2
- (void)addTerminatorOperation:(id)arg1;	// IMP=0x000000000001c3c1
- (id)init;	// IMP=0x000000000001c330

@end
