//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSOperation.h>

@class AutocompleteContext, NSString;
@protocol SearchRecentsOperationDelegate;

@interface SearchRecentsOperation : NSOperation
{
    NSString *_query;	// 8 = 0x8
    _Bool _isExecuting;	// 16 = 0x10
    _Bool _isFinished;	// 17 = 0x11
    AutocompleteContext *_context;	// 24 = 0x18
    id <SearchRecentsOperationDelegate> _delegate;	// 32 = 0x20
}

- (void).cxx_destruct;	// IMP=0x0020000000a93150
@property(nonatomic) __weak id <SearchRecentsOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (_Bool)isFinished;	// IMP=0x0010000000a93113
- (_Bool)isExecuting;	// IMP=0x0010000000a93103
- (_Bool)isAsynchronous;	// IMP=0x0010000000a930fb
- (void)start;	// IMP=0x0010000000a9285a
- (id)initWithSearchQuery:(id)arg1 context:(id)arg2;	// IMP=0x0010000000a927ac

@end

