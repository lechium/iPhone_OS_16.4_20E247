//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@class CRLCanvasRep, NSString;
@protocol CRLGestureDelegate;

@interface UIGestureRecognizer (CRLGestureDispatcher)
- (_Bool)isDone;	// IMP=0x0020000000109274
@property(readonly, nonatomic) long long tsdModifierFlags;
@property(readonly, nonatomic) int gestureState;
@property(nonatomic) __weak id <CRLGestureDelegate> gestureDelegate;
- (struct CGPoint)unscaledLocationForICC:(id)arg1;	// IMP=0x0010000000108f4b
@property(nonatomic) long long inputType;
@property(retain, nonatomic) CRLCanvasRep *targetRep;
- (id)cachedGestureTarget;	// IMP=0x0010000000108ec5
- (void)setCachedGestureTarget:(id)arg1;	// IMP=0x0010000000108e52
@property(retain, nonatomic) NSString *gestureKind;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;	// IMP=0x0010000000108d51

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end
