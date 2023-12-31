//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class LNActionMetadata, LNActionParameterMetadata, LNDynamicOptionsResult, NSString;

__attribute__((visibility("hidden")))
@interface LNFetchOptionsConnectionOperation
{
    LNActionMetadata *_actionMetadata;	// 8 = 0x8
    LNActionParameterMetadata *_parameterMetadata;	// 16 = 0x10
    NSString *_searchTerm;	// 24 = 0x18
    NSString *_localeIdentifier;	// 32 = 0x20
    LNDynamicOptionsResult *_result;	// 40 = 0x28
    CDUnknownBlockType _completionHandler;	// 48 = 0x30
}

- (void).cxx_destruct;	// IMP=0x000000000009e15a
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(retain, nonatomic) LNDynamicOptionsResult *result; // @synthesize result=_result;
@property(retain, nonatomic) NSString *localeIdentifier; // @synthesize localeIdentifier=_localeIdentifier;
@property(copy, nonatomic) NSString *searchTerm; // @synthesize searchTerm=_searchTerm;
@property(retain, nonatomic) LNActionParameterMetadata *parameterMetadata; // @synthesize parameterMetadata=_parameterMetadata;
@property(retain, nonatomic) LNActionMetadata *actionMetadata; // @synthesize actionMetadata=_actionMetadata;
- (void)finishWithError:(id)arg1;	// IMP=0x000000000009df99
- (void)start;	// IMP=0x000000000009dcef
- (id)initWithConnectionInterface:(id)arg1 actionMetadata:(id)arg2 parameterMetadata:(id)arg3 searchTerm:(id)arg4 localeIdentifier:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;	// IMP=0x000000000009d8c9

@end

