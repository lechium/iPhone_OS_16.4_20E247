//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <iTunesStore/ISOperation.h>

@class NSSet, NSString, SSAuthenticationContext;

@interface SetAutomaticDownloadKindsOperation : ISOperation
{
    SSAuthenticationContext *_authenticationContext;	// 96 = 0x60
    NSString *_clientIdentifierHeader;	// 104 = 0x68
    NSSet *_downloadKinds;	// 112 = 0x70
    NSSet *_previousDownloadKinds;	// 120 = 0x78
    _Bool _runsOnlyIfKindsAreDirty;	// 128 = 0x80
    _Bool _shouldSuppressServerDialogs;	// 129 = 0x81
}

- (void)_run;	// IMP=0x00200000000aaea2
- (_Bool)_postDownloadKinds:(id)arg1 error:(id *)arg2;	// IMP=0x00100000000aa89f
- (_Bool)_isFatalError:(id)arg1;	// IMP=0x00100000000aa88f
- (id)_copyFilteredDownloadKinds;	// IMP=0x00100000000aa60a
- (id)uniqueKey;	// IMP=0x00100000000aa5fd
- (_Bool)shouldFailAfterUniquePredecessorError:(id)arg1;	// IMP=0x00100000000aa5eb
- (void)run;	// IMP=0x00100000000aa41c
@property _Bool shouldSuppressServerDialogs;
@property _Bool runsOnlyIfKindsAreDirty;
@property(copy) NSSet *previousDownloadKinds;
@property(copy) NSString *clientIdentifierHeader;
@property(copy) SSAuthenticationContext *authenticationContext;
@property(readonly) NSSet *downloadKinds;
- (void)dealloc;	// IMP=0x00100000000aa055
- (id)initWithDownloadKinds:(id)arg1;	// IMP=0x00100000000a9ff7

@end

