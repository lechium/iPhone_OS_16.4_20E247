//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CRLInsertionContext : NSObject
{
}

+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 shouldEndEditing:(_Bool)arg3 fromDragToInsertController:(_Bool)arg4 insertFloating:(_Bool)arg5 targetZOrder:(unsigned long long)arg6;	// IMP=0x0040000000283762
+ (id)dragInsertionContextWithPreferredCenter:(struct CGPoint)arg1 required:(_Bool)arg2 fromDragToInsertController:(_Bool)arg3 insertFloating:(_Bool)arg4 targetZOrder:(unsigned long long)arg5;	// IMP=0x0010000000283735
+ (id)nonInteractiveInlineInsertionContext;	// IMP=0x00100000002836d0
+ (id)nonInteractiveNonEditingEndingFloatingInsertionContext;	// IMP=0x001000000028366b
+ (id)iosDragFloatingInsertionContext;	// IMP=0x0010000000283606
+ (id)nonInteractiveFloatingInsertionContext;	// IMP=0x00100000002835a1
+ (id)nonInteractiveInsertionContext;	// IMP=0x001000000028353c
- (id)insertionContextFromInsertionContextWithNextZOrder;	// IMP=0x0020000000283848
- (id)insertionContextFromInsertionContextWithZOrder:(unsigned long long)arg1;	// IMP=0x001000000028383f
@property(readonly, nonatomic, getter=isInteractive) _Bool interactive;
@property(readonly, nonatomic) unsigned long long targetZOrder;
@property(readonly, nonatomic) _Bool insertInline;
@property(readonly, nonatomic) _Bool fromDragToInsertController;
- (_Bool);	// IMP=0x001000000028380f
@property(readonly, nonatomic) _Bool insertFloating;
@property(readonly, nonatomic) _Bool shouldEndEditing;
@property(readonly, nonatomic) struct CGPoint preferredCenter;
@property(readonly, nonatomic, getter=isPreferredCenterRequired) _Bool preferredCenterRequired;
@property(readonly, nonatomic) _Bool hasPreferredCenter;
- (id)initSubclass;	// IMP=0x001000000028350d

// Remaining properties
@property(readonly, nonatomic) _Bool insertFromDrag;

@end

