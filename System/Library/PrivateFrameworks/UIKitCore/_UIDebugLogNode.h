//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, _UIDebugLogNodeTreeStyle;

__attribute__((visibility("hidden")))
@interface _UIDebugLogNode
{
    NSMutableArray *_childMessages;	// 24 = 0x18
    _UIDebugLogNodeTreeStyle *_treeStyle;	// 32 = 0x20
}

+ (id)rootNode;	// IMP=0x0060000000e2efe7
- (void).cxx_destruct;	// IMP=0x0000000000e2f7c2
@property(retain, nonatomic) _UIDebugLogNodeTreeStyle *treeStyle; // @synthesize treeStyle=_treeStyle;
- (id)attributedDescription;	// IMP=0x0000000000e2f730
- (id)description;	// IMP=0x0000000000e2f6c3
- (void)_appendAttributedChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3;	// IMP=0x0000000000e2f5c2
- (void)_appendChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3;	// IMP=0x0000000000e2f508
- (void)__genericAppendChildDescription:(id)arg1 withPrefix:(id)arg2 inheritedTreeStyle:(id)arg3 recursionSelector:(SEL)arg4 appendHandler:(CDUnknownBlockType)arg5;	// IMP=0x0000000000e2f062
- (void)addMessage:(id)arg1;	// IMP=0x0000000000e2f045
@property(readonly, nonatomic) _Bool hasMessages;
- (_Bool)_isNode;	// IMP=0x0000000000e2f019
- (id)initWithString:(id)arg1 attributedString:(id)arg2;	// IMP=0x0000000000e2ef8a

@end
