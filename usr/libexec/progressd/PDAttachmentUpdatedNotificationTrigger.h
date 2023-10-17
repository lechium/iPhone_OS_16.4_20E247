//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class PDRing;

@interface PDAttachmentUpdatedNotificationTrigger
{
    PDRing *_notifiedHandoutIds;	// 8 = 0x8
}

+ (void)_logAttachmentUpdate:(id)arg1 forID:(id)arg2;	// IMP=0x0040000000165f04
- (void).cxx_destruct;	// IMP=0x00200000001667a0
@property(retain, nonatomic) PDRing *notifiedHandoutIds; // @synthesize notifiedHandoutIds=_notifiedHandoutIds;
- (id)classWithClassID:(id)arg1 database:(id)arg2;	// IMP=0x00100000001666f8
- (void)handleAttachmentUpdate:(long long)arg1 forAttachment:(id)arg2 inDB:(id)arg3;	// IMP=0x0010000000165fc7
- (void)attachmentWillChange:(id)arg1;	// IMP=0x0010000000165c02
- (void)attachmentDidInsert:(id)arg1;	// IMP=0x0010000000165917
- (void)dealloc;	// IMP=0x00100000001658a2
- (id)initWithDatabase:(id)arg1;	// IMP=0x0010000000165792

@end
