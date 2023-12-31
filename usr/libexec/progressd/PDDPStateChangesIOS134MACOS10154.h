//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <ProtocolBuffer/PBCodable.h>

@class PDDPStateChangesIOS134MACOS10154ActivityDomainState, PDDPStateChangesIOS134MACOS10154HandoutDomainState, PDDPStateChangesIOS134MACOS10154MessageDomainState, PDDPStateChangesIOS134MACOS10154PersonalDomainState, PDDPStateChangesIOS134MACOS10154ProgressDomainState;

@interface PDDPStateChangesIOS134MACOS10154 : PBCodable
{
    PDDPStateChangesIOS134MACOS10154ActivityDomainState *_activityState;	// 8 = 0x8
    PDDPStateChangesIOS134MACOS10154HandoutDomainState *_handoutState;	// 16 = 0x10
    PDDPStateChangesIOS134MACOS10154MessageDomainState *_messageState;	// 24 = 0x18
    PDDPStateChangesIOS134MACOS10154PersonalDomainState *_personalState;	// 32 = 0x20
    PDDPStateChangesIOS134MACOS10154ProgressDomainState *_progressState;	// 40 = 0x28
}

- (void).cxx_destruct;	// IMP=0x0020000000185c98
@property(retain, nonatomic) PDDPStateChangesIOS134MACOS10154HandoutDomainState *handoutState; // @synthesize handoutState=_handoutState;
@property(retain, nonatomic) PDDPStateChangesIOS134MACOS10154MessageDomainState *messageState; // @synthesize messageState=_messageState;
@property(retain, nonatomic) PDDPStateChangesIOS134MACOS10154PersonalDomainState *personalState; // @synthesize personalState=_personalState;
@property(retain, nonatomic) PDDPStateChangesIOS134MACOS10154ProgressDomainState *progressState; // @synthesize progressState=_progressState;
@property(retain, nonatomic) PDDPStateChangesIOS134MACOS10154ActivityDomainState *activityState; // @synthesize activityState=_activityState;
- (void)mergeFrom:(id)arg1;	// IMP=0x0010000000185a9a
- (unsigned long long)hash;	// IMP=0x00100000001859f7
- (_Bool)isEqual:(id)arg1;	// IMP=0x0010000000185897
- (id)copyWithZone:(struct _NSZone *)arg1;	// IMP=0x001000000018577f
- (void)copyTo:(id)arg1;	// IMP=0x00100000001856bc
- (void)writeTo:(id)arg1;	// IMP=0x0010000000185608
- (_Bool)readFrom:(id)arg1;	// IMP=0x00100000001852d9
- (id)dictionaryRepresentation;	// IMP=0x0010000000185120
- (id)description;	// IMP=0x0010000000185071
@property(readonly, nonatomic) _Bool hasHandoutState;
@property(readonly, nonatomic) _Bool hasMessageState;
@property(readonly, nonatomic) _Bool hasPersonalState;
@property(readonly, nonatomic) _Bool hasProgressState;
@property(readonly, nonatomic) _Bool hasActivityState;

@end

