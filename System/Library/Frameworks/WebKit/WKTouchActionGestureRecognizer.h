//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol WKTouchActionGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface WKTouchActionGestureRecognizer : UIGestureRecognizer
{
    struct HashMap<unsigned int, WTF::OptionSet<WebCore::TouchAction>, WTF::DefaultHash<unsigned int>, WTF::HashTraits<unsigned int>, WTF::HashTraits<WTF::OptionSet<WebCore::TouchAction>>, WTF::HashTableTraits> _touchActionsByTouchIdentifier;	// 8 = 0x8
    id <WKTouchActionGestureRecognizerDelegate> _touchActionDelegate;	// 16 = 0x10
}

- (id).cxx_construct;	// IMP=0x000000000045e771
- (void).cxx_destruct;	// IMP=0x000000000045e751
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x000000000045e47c
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x000000000045e474
- (void)_updateState;	// IMP=0x000000000045e45d
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000045e44b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000045e439
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000045e427
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x000000000045e415
- (void)clearTouchActionsForTouchIdentifier:(unsigned int)arg1;	// IMP=0x000000000045e3b6
- (void)setTouchActions:(OptionSet_6c8dcb60)arg1 forTouchIdentifier:(unsigned int)arg2;	// IMP=0x000000000045e386
- (id)initWithTouchActionDelegate:(id)arg1;	// IMP=0x000000000045e342

@end

