//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNContact, EKEvent, EKUILabeledAvatarView, UILabel;

@interface CarplayAttendeeTableViewCell
{
    EKEvent *_event;	// 8 = 0x8
    CNContact *_contact;	// 16 = 0x10
    EKUILabeledAvatarView *_avatar;	// 24 = 0x18
    UILabel *_attendeeRelationship;	// 32 = 0x20
    UILabel *_attendeeName;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x00200000000c26b4
- (void)cellWasTapped;	// IMP=0x00100000000c25e6
- (void)updateWithEvent:(id)arg1;	// IMP=0x00100000000c2334
- (void)_createAndActivateConstraints;	// IMP=0x00100000000c1c7a
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;	// IMP=0x00100000000c18d9

@end

