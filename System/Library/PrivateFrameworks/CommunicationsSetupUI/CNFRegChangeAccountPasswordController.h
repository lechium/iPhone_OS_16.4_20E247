//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol CNFRegChangeAccountPasswordDelegate;

__attribute__((visibility("hidden")))
@interface CNFRegChangeAccountPasswordController
{
    id <CNFRegChangeAccountPasswordDelegate> _delegate;	// 72 = 0x48
    NSString *_appleID;	// 80 = 0x50
}

- (void).cxx_destruct;	// IMP=0x0000000000049340
@property(copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property(nonatomic) id <CNFRegChangeAccountPasswordDelegate> delegate; // @synthesize delegate=_delegate;
- (void)completeHandoffWithStatus:(int)arg1 appleID:(id)arg2 authID:(id)arg3 authToken:(id)arg4;	// IMP=0x0000000000049258
- (void)cancelTapped;	// IMP=0x000000000004920c
- (id)overrideURLForURL:(id)arg1;	// IMP=0x000000000004902f
- (id)logName;	// IMP=0x0000000000049022
- (id)bagKey;	// IMP=0x0000000000048fcb
- (_Bool)canSendURLRequest:(id)arg1;	// IMP=0x0000000000048e67
- (void)setHeadersForRequest:(id)arg1;	// IMP=0x0000000000048da9
- (void)dealloc;	// IMP=0x0000000000048d6b
- (id)initWithRegController:(id)arg1 appleID:(id)arg2;	// IMP=0x0000000000048cf9

@end
