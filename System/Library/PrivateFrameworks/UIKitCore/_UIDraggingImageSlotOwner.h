//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, _UIDragManager;

__attribute__((visibility("hidden")))
@interface _UIDraggingImageSlotOwner : NSObject
{
    NSMutableArray *_usedSlotIDs;	// 8 = 0x8
    _UIDragManager *_dragManager;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x00000000006579b2
@property(readonly, nonatomic) __weak _UIDragManager *dragManager; // @synthesize dragManager=_dragManager;
- (unsigned int)uploadImage:(struct CGImage *)arg1;	// IMP=0x0000000000657937
- (void)addUsedSlotID:(unsigned int)arg1;	// IMP=0x00000000006578ab
- (void)dealloc;	// IMP=0x000000000065777c
- (id)initWithDragManager:(id)arg1;	// IMP=0x00000000006576e6

@end

