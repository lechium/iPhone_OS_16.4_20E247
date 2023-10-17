//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NotesUI/ICTableTextAttachment.h>

@interface ICTableTextAttachment (UI)
- (void)placeView:(id)arg1 withFrame:(struct CGRect)arg2 inParentView:(id)arg3 characterIndex:(unsigned long long)arg4 layoutManager:(id)arg5;	// IMP=0x0070000000026e16
- (double)availableWidthForTextContainer:(id)arg1;	// IMP=0x0070000000026c71
- (_Bool)supportsDraggingWithoutSelecting;	// IMP=0x0070000000026c69
- (Class)attachmentViewControllerClass;	// IMP=0x0070000000026c58
- (Class)attachmentViewClass;	// IMP=0x0070000000026c47
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1 proposedLineFragment:(struct CGRect)arg2;	// IMP=0x00700000000269ca
- (struct CGSize)attachmentSizeForTextContainer:(id)arg1;	// IMP=0x0070000000026998
@end
