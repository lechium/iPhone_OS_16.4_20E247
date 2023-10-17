//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class PKAppletSubcredential, PKPassShare, PKSharingMessage;

@interface PDStatefulShareAcceptanceResponse : NSObject
{
    _Bool _shouldWaitForResponse;	// 8 = 0x8
    PKAppletSubcredential *_subcredential;	// 16 = 0x10
    PKPassShare *_localAcceptedShare;	// 24 = 0x18
    PKSharingMessage *_keySignRequestMessage;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x00200000000d081d
@property(nonatomic) _Bool shouldWaitForResponse; // @synthesize shouldWaitForResponse=_shouldWaitForResponse;
@property(retain, nonatomic) PKSharingMessage *keySignRequestMessage; // @synthesize keySignRequestMessage=_keySignRequestMessage;
@property(retain, nonatomic) PKPassShare *localAcceptedShare; // @synthesize localAcceptedShare=_localAcceptedShare;
@property(retain, nonatomic) PKAppletSubcredential *subcredential; // @synthesize subcredential=_subcredential;

@end
