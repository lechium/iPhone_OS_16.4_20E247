//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKAttachmentItem, UIImageView;

__attribute__((visibility("hidden")))
@interface CKReviewLargeAttachmentsTableViewCell
{
    UIImageView *_previewView;	// 8 = 0x8
    CKAttachmentItem *_attachmentItem;	// 16 = 0x10
}

+ (struct CGSize)leftHandSideViewSize;	// IMP=0x006000000000ea82
+ (double)requestedHeight;	// IMP=0x006000000000ea74
- (void).cxx_destruct;	// IMP=0x000000000000f34e
@property(retain, nonatomic) CKAttachmentItem *attachmentItem; // @synthesize attachmentItem=_attachmentItem;
@property(retain, nonatomic) UIImageView *previewView; // @synthesize previewView=_previewView;
- (void)_updateImageViewForAttachmentItem;	// IMP=0x000000000000ee50
- (void)setModelObject:(id)arg1;	// IMP=0x000000000000eb65
- (id)leftHandSideView;	// IMP=0x000000000000ea93
- (void)prepareForReuse;	// IMP=0x000000000000e9f5

@end

