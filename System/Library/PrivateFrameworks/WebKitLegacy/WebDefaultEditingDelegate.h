//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface WebDefaultEditingDelegate : NSObject
{
}

+ (id)sharedEditingDelegate;	// IMP=0x00800000000ef7b0
- (id)undoManagerForWebView:(id)arg1;	// IMP=0x00000000000ef8f0
- (void)webViewDidChangeSelection:(id)arg1;	// IMP=0x00000000000ef8e0
- (void)webViewDidChangeTypingStyle:(id)arg1;	// IMP=0x00000000000ef8d0
- (void)webViewDidEndEditing:(id)arg1;	// IMP=0x00000000000ef8c0
- (void)webViewDidChange:(id)arg1;	// IMP=0x00000000000ef8b0
- (void)webViewDidBeginEditing:(id)arg1;	// IMP=0x00000000000ef8a0
- (id)documentFragmentForPasteboardItemAtIndex:(long long)arg1;	// IMP=0x00000000000ef890
- (id)supportedPasteboardTypesForCurrentSelection;	// IMP=0x00000000000ef880
- (_Bool)webView:(id)arg1 doCommandBySelector:(SEL)arg2;	// IMP=0x00000000000ef870
- (_Bool)webView:(id)arg1 shouldChangeTypingStyle:(id)arg2 toStyle:(id)arg3;	// IMP=0x00000000000ef860
- (_Bool)webView:(id)arg1 shouldMoveRangeAfterDelete:(id)arg2 replacingRange:(id)arg3;	// IMP=0x00000000000ef850
- (_Bool)webView:(id)arg1 shouldApplyStyle:(id)arg2 toElementsInDOMRange:(id)arg3;	// IMP=0x00000000000ef840
- (_Bool)webView:(id)arg1 shouldChangeSelectedDOMRange:(id)arg2 toDOMRange:(id)arg3 affinity:(unsigned long long)arg4 stillSelecting:(_Bool)arg5;	// IMP=0x00000000000ef830
- (_Bool)webView:(id)arg1 shouldDeleteDOMRange:(id)arg2;	// IMP=0x00000000000ef820
- (_Bool)webView:(id)arg1 shouldInsertText:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;	// IMP=0x00000000000ef810
- (_Bool)webView:(id)arg1 shouldInsertNode:(id)arg2 replacingDOMRange:(id)arg3 givenAction:(long long)arg4;	// IMP=0x00000000000ef800
- (_Bool)webView:(id)arg1 shouldEndEditingInDOMRange:(id)arg2;	// IMP=0x00000000000ef7f0
- (_Bool)webView:(id)arg1 shouldBeginEditingInDOMRange:(id)arg2;	// IMP=0x00000000000ef7e0

@end

