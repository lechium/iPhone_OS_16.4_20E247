//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIPrintPageRenderer.h>

@class MISSING_TYPE;

@interface _TtC9Reminders29TTRIReminderPrintPageRenderer : UIPrintPageRenderer
{
    MISSING_TYPE *pageRange;	// 8 = 0x8
    MISSING_TYPE *renderingUtils;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00400000004c1290
- (id)init;	// IMP=0x00100000004c1230
- (void)drawFooterForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00100000004c11b0
- (void)drawContentForPageAtIndex:(long long)arg1 inRect:(struct CGRect)arg2;	// IMP=0x00100000004c0f30
- (void)prepareForDrawingPages:(struct _NSRange)arg1;	// IMP=0x00100000004c0ed0
@property(nonatomic, readonly) long long numberOfPages;

@end

