//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSItemProvider;

@interface CRLiOSCanvasDragItem : NSObject
{
    NSItemProvider *_itemProvider;	// 8 = 0x8
    CDUnknownBlockType _previewGeneratingBlock;	// 16 = 0x10
    _Bool allowsMoveOperation;	// 24 = 0x18
    _Bool prefersFullSizePreviews;	// 25 = 0x19
    id sourceObject;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000054e9ac
@property(nonatomic) _Bool prefersFullSizePreviews; // @synthesize prefersFullSizePreviews;
@property(nonatomic) _Bool allowsMoveOperation; // @synthesize allowsMoveOperation;
@property(nonatomic) __weak id sourceObject; // @synthesize sourceObject;
@property(readonly, copy, nonatomic) CDUnknownBlockType previewGeneratingBlock; // @synthesize previewGeneratingBlock=_previewGeneratingBlock;
@property(readonly, nonatomic) NSItemProvider *itemProvider; // @synthesize itemProvider=_itemProvider;
- (id)initWithItemProvider:(id)arg1 previewGeneratingBlock:(CDUnknownBlockType)arg2;	// IMP=0x001000000054e8a2

@end

