//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CRLImage, CRLWPHighlightArrayController;
@protocol CRLSearchReference;

@protocol CRLWPHighlightArrayControllerProtocol
- (void)pulseAnimationDidStop:(CRLWPHighlightArrayController *)arg1;
- (CRLImage *)imageForSearchReference:(id <CRLSearchReference>)arg1 forPath:(struct CGPath *)arg2 shouldPulsate:(_Bool)arg3;
- (struct CGPath *)newPathForSearchReference:(id <CRLSearchReference>)arg1;

@optional
- (unsigned long long)pulseAnimationStyle:(CRLWPHighlightArrayController *)arg1;
@end

