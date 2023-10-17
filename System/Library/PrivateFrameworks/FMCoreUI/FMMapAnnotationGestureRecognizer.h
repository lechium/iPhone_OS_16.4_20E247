//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIGestureRecognizer.h>

@protocol FMMapAnnotationGestureRecognizerDelegate;

__attribute__((visibility("hidden")))
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer
{
    id <FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;	// 8 = 0x8
}

@property(nonatomic) id <FMMapAnnotationGestureRecognizerDelegate> touchDelegate; // @synthesize touchDelegate=_touchDelegate;
- (_Bool)canPreventGestureRecognizer:(id)arg1;	// IMP=0x0000000000002cbb
- (_Bool)canBePreventedByGestureRecognizer:(id)arg1;	// IMP=0x0000000000002cb3
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000002c67
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000002c1b
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;	// IMP=0x0000000000002bcf
- (id)init;	// IMP=0x0000000000002b6c

@end
