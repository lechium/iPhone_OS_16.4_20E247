//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, PKPassLibrary, PKPaymentService;
@protocol MapsSuggestionsWalletPassFieldReader;

@interface MapsSuggestionsRealWalletConnector : NSObject
{
    PKPassLibrary *_passLibrary;	// 8 = 0x8
    PKPaymentService *_paymentService;	// 16 = 0x10
    id <MapsSuggestionsWalletPassFieldReader> _fieldReader;	// 24 = 0x18
}

+ (_Bool)isAvailable;	// IMP=0x0020000000021bd2
- (void).cxx_destruct;	// IMP=0x002000000002212f
@property(readonly, nonatomic) NSString *uniqueName;
- (long long)paymentNetworkIdentiferForPass:(id)arg1;	// IMP=0x00100000000220ba
- (id)passesOfType:(unsigned long long)arg1;	// IMP=0x00100000000220a4
- (id)supportedTransitIdsForPass:(id)arg1;	// IMP=0x001000000002200c
- (_Bool)expressSupportedByPass:(id)arg1;	// IMP=0x0010000000021d2b
- (id)defaultPass;	// IMP=0x0010000000021ca7
- (id)fieldReader;	// IMP=0x0010000000021c99
- (id)init;	// IMP=0x0010000000021beb

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

