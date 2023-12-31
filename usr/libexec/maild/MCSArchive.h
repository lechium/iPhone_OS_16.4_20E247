//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class MCSMessageOperation;

@interface MCSArchive
{
    MCSMessageOperation *_seenOrTransferOperation;	// 16 = 0x10
    MCSMessageOperation *_deleteOperation;	// 24 = 0x18
    _Bool _isDeleteInPlace;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x002000000004436b
- (id)localizedShortOperationDescription;	// IMP=0x00100000000442eb
- (id)localizedErrorTitleForMessageCount:(unsigned long long)arg1;	// IMP=0x00100000000442ce
- (id)localizedErrorDescriptionForMessageCount:(unsigned long long)arg1;	// IMP=0x00100000000442b1
- (_Bool)willFlag;	// IMP=0x0010000000044254
- (_Bool)willUnflag;	// IMP=0x00100000000441f7
- (_Bool)willMarkUnread;	// IMP=0x001000000004419a
- (_Bool)willMarkRead;	// IMP=0x001000000004413d
- (_Bool)commitToMessages:(id)arg1 failures:(id)arg2 newMessages:(id)arg3;	// IMP=0x0010000000044000
- (id)applyPendingChangeToObjects:(id)arg1;	// IMP=0x0010000000043ee4
- (id)initWithStore:(id)arg1;	// IMP=0x0010000000043c57

@end

