//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class NSMutableSet;
@protocol CRLiOSAllTouchesDoneGestureRecognizerDelegate;

@interface CRLiOSAllTouchesDoneGestureRecognizer : UIGestureRecognizer
{
    NSMutableSet *_touches;	// 8 = 0x8
    _Bool _currentlyCountingTouches;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x0020000000519e37
- (void)p_touchesEndedOrCancelled:(id)arg1;	// IMP=0x0010000000519d8d
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000519d7b
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000519d69
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0010000000519c44
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0010000000519b9b
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0010000000519b93
- (void)reset;	// IMP=0x0010000000519af3
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;	// IMP=0x0010000000519a6d

// Remaining properties
@property(nonatomic) __weak id <CRLiOSAllTouchesDoneGestureRecognizerDelegate> delegate; // @dynamic delegate;

@end
