//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSRegularExpression;

__attribute__((visibility("hidden")))
@interface SKUITemplateLoader : NSObject
{
    SKUITemplateLoader *_retainSelf;	// 8 = 0x8
    NSArray *_URLs;	// 16 = 0x10
    CDUnknownBlockType _completionBlock;	// 24 = 0x18
    NSOperationQueue *_operationQueue;	// 32 = 0x20
    NSRegularExpression *_templateParsingRegularExpression;	// 40 = 0x28
    NSMutableArray *_errors;	// 48 = 0x30
    NSMutableDictionary *_templateStrings;	// 56 = 0x38
    long long _pendingOperationCount;	// 64 = 0x40
}

- (void).cxx_destruct;	// IMP=0x00000000002085ad
@property(nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property(readonly, nonatomic) NSMutableDictionary *templateStrings; // @synthesize templateStrings=_templateStrings;
@property(readonly, nonatomic) NSMutableArray *errors; // @synthesize errors=_errors;
@property(readonly, nonatomic) NSRegularExpression *templateParsingRegularExpression; // @synthesize templateParsingRegularExpression=_templateParsingRegularExpression;
@property(readonly, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, copy, nonatomic) NSArray *URLs; // @synthesize URLs=_URLs;
- (void)load;	// IMP=0x00000000002082f6
- (void)_operationDidFinish:(id)arg1;	// IMP=0x00000000002080de
- (void)_operation:(id)arg1 didFailWithError:(id)arg2;	// IMP=0x0000000000208048
- (void)_operation:(id)arg1 didCompleteWithOutput:(id)arg2;	// IMP=0x0000000000207e0c
- (id)_operationWithURL:(id)arg1;	// IMP=0x0000000000207ac7
- (id)initWithURLs:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;	// IMP=0x0000000000207972

@end
