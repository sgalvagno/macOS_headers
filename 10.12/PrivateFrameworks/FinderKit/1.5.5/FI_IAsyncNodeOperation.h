//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol IAsyncNodeOperationDelegateProtocol;

__attribute__((visibility("hidden")))
@interface FI_IAsyncNodeOperation : NSObject
{
    struct OpaqueOperationRef *_operationRef;
    struct OperationMonitor _operationMonitor;
    struct vector<TOperationRecord, std::__1::allocator<TOperationRecord>> _operationRecordList;
    struct TFENodeVector _nodes;
    struct TAsyncNodeOperationAssistant *_operationAssistant;
    struct OperationIterator _operationIterator;
    struct __wrap_iter<TOperationRecord *> {
        struct TOperationRecord *__i;
    } _operationRecordIter;
    struct OperationStatus _status;
    id <IAsyncNodeOperationDelegateProtocol> _delegate;
    unsigned int _respondsToFlags;
    unsigned int _options;
}

+ (id)operationWithNodes:(const struct TFENodeVector *)arg1;
@property unsigned int options; // @synthesize options=_options;
@property(nonatomic) id <IAsyncNodeOperationDelegateProtocol> delegate; // @synthesize delegate=_delegate;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)handleCompletedNotification;
- (int)handleSuboperationCompleted:(unsigned int)arg1 targetNode:(const struct TFENode *)arg2;
- (int)handleSuboperationStarted:(unsigned int)arg1;
- (int)handleErrorNotification:(const struct OperationMonitor *)arg1 error:(const struct OperationErrorRecord *)arg2;
- (int)handleStatusNotification:(const struct OperationMonitor *)arg1;
- (void)resetOperationRecordIter;
- (struct OperationRecord *)operationIterNext;
- (struct OperationRecord *)operationIterFirst;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forNode:(const struct TFENode *)arg2;
- (void)configureOperationRecord:(struct TOperationRecord *)arg1 forIndex:(unsigned long long)arg2;
- (void)configureForNodes:(const struct TFENodeVector *)arg1;
- (int)cancelOperation;
- (int)cancelCurrentSuboperation;
- (int)startOperation;
- (const struct TFENodeVector *)nodes;
- (void)dealloc;
- (id)initWithNodes:(const struct TFENodeVector *)arg1;

@end

