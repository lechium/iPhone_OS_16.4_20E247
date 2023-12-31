//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AKController, AKHighlightAnnotation;

@interface AKHighlightAnnotationController : NSObject
{
    AKController *_controller;	// 8 = 0x8
    AKHighlightAnnotation *_continuousHighlight;	// 16 = 0x10
}

- (void).cxx_destruct;	// IMP=0x000000000007b063
@property(retain) AKHighlightAnnotation *continuousHighlight; // @synthesize continuousHighlight=_continuousHighlight;
@property __weak AKController *controller; // @synthesize controller=_controller;
- (_Bool)_clearHighlightsWithStyleMatchingMask:(unsigned long long)arg1 except:(id)arg2 inRange:(struct _NSRange)arg3 onPageController:(id)arg4;	// IMP=0x000000000007aab4
- (_Bool)_adaptExistingHighlightsToNewHighlight:(id)arg1 onPageController:(id)arg2 firstModifiedHighlight:(id *)arg3;	// IMP=0x00000000000796ee
- (id)_highlightsInCharacterIndexRange:(struct _NSRange)arg1 onPageController:(id)arg2;	// IMP=0x00000000000793ac
- (id)_createHighlightAnnotationWithAttributeTag:(long long)arg1;	// IMP=0x0000000000079308
- (void)endContinuousHighlighting;	// IMP=0x0000000000079038
- (void)continueHighlighting;	// IMP=0x0000000000078ed8
- (void)beginContinuousHighlighting;	// IMP=0x0000000000078dd2
- (id)highlightsWithinSelection;	// IMP=0x0000000000078c46
- (void)clearHighlightsWithinSelection;	// IMP=0x0000000000078ad9
- (void)performOneShotHighlightWithAttributeTag:(long long)arg1;	// IMP=0x000000000007880d
- (id)initWithController:(id)arg1;	// IMP=0x00000000000787a9

@end

