#ifndef V8_CLASS_BUILTIN_DEFINITIONS_FROM_DSL_H_
#define V8_CLASS_BUILTIN_DEFINITIONS_FROM_DSL_H_


#define TORQUE_GENERATED_ACCESS_CHECK_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallbackOffset, kTaggedSize) \
V(kNamedInterceptorOffset, kTaggedSize) \
V(kIndexedInterceptorOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESSOR_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kExpectedReceiverTypeOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kGetterOffset, kTaggedSize) \
V(kJsGetterOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ACCESSOR_PAIR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kGetterOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ALIASED_ARGUMENTS_ENTRY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kAliasedContextSlotOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ARRAY_BOILERPLATE_DESCRIPTION_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFlagsOffset, kTaggedSize) \
V(kConstantElementsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ASYNC_GENERATOR_REQUEST_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNextOffset, kTaggedSize) \
V(kResumeModeOffset, kTaggedSize) \
V(kValueOffset, kTaggedSize) \
V(kPromiseOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BREAK_POINT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BREAK_POINT_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_BYTE_ARRAY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CALLABLE_TASK_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallableOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CALLBACK_TASK_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallbackOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CELL_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CLASS_POSITIONS_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kStartOffset, kTaggedSize) \
V(kEndOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_CONS_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFirstOffset, kTaggedSize) \
V(kSecondOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_DATA_HANDLER_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSmiHandlerOffset, kTaggedSize) \
V(kValidityCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kData1Offset, kTaggedSize) \
V(kData2Offset, kTaggedSize) \
V(kData3Offset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EMBEDDER_DATA_ARRAY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_ONE_BYTE_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_STRING_FIELDS(V) \
V(kResourceOffset, kSystemPointerSize) \
V(kResourceDataOffset, kSystemPointerSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_EXTERNAL_TWO_BYTE_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_ARRAY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kObjectsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_ARRAY_BASE_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_DOUBLE_ARRAY_FIELDS(V) \
V(kFloatsOffset, kDoubleSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FIXED_TYPED_ARRAY_BASE_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBasePointerOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kExternalPointerOffset, kSystemPointerSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FOREIGN_FIELDS(V) \
V(kForeignAddressOffset, kSystemPointerSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FREE_SPACE_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSizeOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FUNCTION_TEMPLATE_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCallCodeOffset, kTaggedSize) \
V(kClassNameOffset, kTaggedSize) \
V(kSignatureOffset, kTaggedSize) \
V(kFunctionTemplateRareDataOffset, kTaggedSize) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kFlagOffset, kTaggedSize) \
V(kLengthOffset, kTaggedSize) \
V(kCachedPropertyNameOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_FUNCTION_TEMPLATE_RARE_DATA_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPrototypeTemplateOffset, kTaggedSize) \
V(kPrototypeProviderTemplateOffset, kTaggedSize) \
V(kParentTemplateOffset, kTaggedSize) \
V(kNamedPropertyHandlerOffset, kTaggedSize) \
V(kIndexedPropertyHandlerOffset, kTaggedSize) \
V(kInstanceTemplateOffset, kTaggedSize) \
V(kInstanceCallHandlerOffset, kTaggedSize) \
V(kAccessCheckInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_HEAP_NUMBER_FIELDS(V) \
V(kValueOffset, kDoubleSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_HEAP_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kMapOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERCEPTOR_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kGetterOffset, kTaggedSize) \
V(kSetterOffset, kTaggedSize) \
V(kQueryOffset, kTaggedSize) \
V(kDescriptorOffset, kTaggedSize) \
V(kDeleterOffset, kTaggedSize) \
V(kEnumeratorOffset, kTaggedSize) \
V(kDefinerOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_INTERNALIZED_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSACCESSOR_PROPERTY_DESCRIPTOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kGetOffset, kTaggedSize) \
V(kSetOffset, kTaggedSize) \
V(kEnumerableOffset, kTaggedSize) \
V(kConfigurableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARGUMENTS_OBJECT_WITH_LENGTH_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_BUFFER_FIELDS(V) \
V(kByteLengthOffset, kIntptrSize) \
V(kBackingStoreOffset, kSystemPointerSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_BUFFER_VIEW_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBufferOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kByteOffsetOffset, kIntptrSize) \
V(kByteLengthOffset, kIntptrSize) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSARRAY_ITERATOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIteratedObjectOffset, kTaggedSize) \
V(kNextIndexOffset, kTaggedSize) \
V(kKindOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSASYNC_FROM_SYNC_ITERATOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSyncIteratorOffset, kTaggedSize) \
V(kNextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSASYNC_FUNCTION_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPromiseOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSASYNC_GENERATOR_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kQueueOffset, kTaggedSize) \
V(kIsAwaitingOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSBOUND_FUNCTION_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kBoundTargetFunctionOffset, kTaggedSize) \
V(kBoundThisOffset, kTaggedSize) \
V(kBoundArgumentsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSCOLLECTION_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSCOLLECTION_ITERATOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTableOffset, kTaggedSize) \
V(kIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSDATA_PROPERTY_DESCRIPTOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kWritableOffset, kTaggedSize) \
V(kEnumerableOffset, kTaggedSize) \
V(kConfigurableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSDATE_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kYearOffset, kTaggedSize) \
V(kMonthOffset, kTaggedSize) \
V(kDayOffset, kTaggedSize) \
V(kWeekdayOffset, kTaggedSize) \
V(kHourOffset, kTaggedSize) \
V(kMinOffset, kTaggedSize) \
V(kSecOffset, kTaggedSize) \
V(kCacheStampOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSFUNCTION_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSharedFunctionInfoOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kFeedbackCellOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kCodeOffset, kTaggedSize) \
V(kPrototypeOrInitialMapOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSGENERATOR_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kFunctionOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kReceiverOffset, kTaggedSize) \
V(kInputOrDebugPosOffset, kTaggedSize) \
V(kResumeModeOffset, kTaggedSize) \
V(kContinuationOffset, kTaggedSize) \
V(kParametersAndRegistersOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSGLOBAL_PROXY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNativeContextOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSMAP_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSMESSAGE_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kMessageTypeOffset, kTaggedSize) \
V(kArgumentsOffset, kTaggedSize) \
V(kScriptOffset, kTaggedSize) \
V(kStackFramesOffset, kTaggedSize) \
V(kStartPositionOffset, kTaggedSize) \
V(kEndPositionOffset, kTaggedSize) \
V(kErrorLevelOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSOBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kElementsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROMISE_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kReactionsOrResultOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROXY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTargetOffset, kTaggedSize) \
V(kHandlerOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSPROXY_REVOCABLE_RESULT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kProxyOffset, kTaggedSize) \
V(kRevokeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSRECEIVER_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPropertiesOrHashOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kDataOffset, kTaggedSize) \
V(kSourceOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_RESULT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIndexOffset, kTaggedSize) \
V(kInputOffset, kTaggedSize) \
V(kGroupsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSREG_EXP_STRING_ITERATOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIteratingRegExpOffset, kTaggedSize) \
V(kIteratedStringOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSET_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSLOPPY_ARGUMENTS_OBJECT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kCalleeOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSSTRING_ITERATOR_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kStringOffset, kTaggedSize) \
V(kNextIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSTYPED_ARRAY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSVALUE_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValueOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_COLLECTION_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTableOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_MAP_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_JSWEAK_SET_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MICROTASK_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_MODULE_INFO_ENTRY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kExportNameOffset, kTaggedSize) \
V(kLocalNameOffset, kTaggedSize) \
V(kImportNameOffset, kTaggedSize) \
V(kModuleRequestOffset, kTaggedSize) \
V(kCellIndexOffset, kTaggedSize) \
V(kBegPosOffset, kTaggedSize) \
V(kEndPosOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_NAME_FIELDS(V) \
V(kHashFieldOffset, kInt32Size) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_OBJECT_TEMPLATE_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kConstructorOffset, kTaggedSize) \
V(kDataOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_ODDBALL_FIELDS(V) \
V(kToNumberRawOffset, kDoubleSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kToStringOffset, kTaggedSize) \
V(kToNumberOffset, kTaggedSize) \
V(kTypeOfOffset, kTaggedSize) \
V(kKindOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PREPARSE_DATA_FIELDS(V) \
V(kDataLengthOffset, kInt32Size) \
V(kInnerLengthOffset, kInt32Size) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_CAPABILITY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kPromiseOffset, kTaggedSize) \
V(kResolveOffset, kTaggedSize) \
V(kRejectOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROMISE_REACTION_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNextOffset, kTaggedSize) \
V(kRejectHandlerOffset, kTaggedSize) \
V(kFulfillHandlerOffset, kTaggedSize) \
V(kPromiseOrCapabilityOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROPERTY_ARRAY_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLengthAndHashOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_PROTOTYPE_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kJsModuleNamespaceOffset, kTaggedSize) \
V(kPrototypeUsersOffset, kTaggedSize) \
V(kRegistrySlotOffset, kTaggedSize) \
V(kValidityCellOffset, kTaggedSize) \
V(kObjectCreateMapOffset, kTaggedSize) \
V(kBitFieldOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SCRIPT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kSourceOffset, kTaggedSize) \
V(kNameOffset, kTaggedSize) \
V(kLineOffsetOffset, kTaggedSize) \
V(kColumnOffsetOffset, kTaggedSize) \
V(kContextOffset, kTaggedSize) \
V(kScriptTypeOffset, kTaggedSize) \
V(kLineEndsOffset, kTaggedSize) \
V(kIdOffset, kTaggedSize) \
V(kEvalFromSharedOrWrappedArgumentsOffset, kTaggedSize) \
V(kEvalFromPositionOffset, kTaggedSize) \
V(kSharedFunctionInfosOffset, kTaggedSize) \
V(kFlagsOffset, kTaggedSize) \
V(kSourceUrlOffset, kTaggedSize) \
V(kSourceMappingUrlOffset, kTaggedSize) \
V(kHostDefinedOptionsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SEQ_ONE_BYTE_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SEQ_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SEQ_TWO_BYTE_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SHARED_FUNCTION_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kFunctionDataOffset, kTaggedSize) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOrScopeInfoOffset, kTaggedSize) \
V(kOuterScopeInfoOrFeedbackMetadataOffset, kTaggedSize) \
V(kScriptOrDebugInfoOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kLengthOffset, kUInt16Size) \
V(kFormalParameterCountOffset, kUInt16Size) \
V(kExpectedNofPropertiesOffset, kUInt16Size) \
V(kFunctionTokenOffsetOffset, kUInt16Size) \
V(kFlagsOffset, kInt32Size) \
V(kSize, 0) \

#define TORQUE_GENERATED_SHARED_FUNCTION_INFO_WITH_ID_FIELDS(V) \
V(kUniqueIdOffset, kInt32Size) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SLICED_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kParentOffset, kTaggedSize) \
V(kOffsetOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SLOPPY_ARGUMENTS_ELEMENTS_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STACK_FRAME_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kLineNumberOffset, kTaggedSize) \
V(kColumnNumberOffset, kTaggedSize) \
V(kScriptIdOffset, kTaggedSize) \
V(kScriptNameOffset, kTaggedSize) \
V(kScriptNameOrSourceUrlOffset, kTaggedSize) \
V(kFunctionNameOffset, kTaggedSize) \
V(kFlagOffset, kTaggedSize) \
V(kIdOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STRING_FIELDS(V) \
V(kLengthOffset, kInt32Size) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_STRUCT_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_SYMBOL_FIELDS(V) \
V(kFlagsOffset, kInt32Size) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kNameOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_TEMPLATE_INFO_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kTagOffset, kTaggedSize) \
V(kSerialNumberOffset, kTaggedSize) \
V(kNumberOfPropertiesOffset, kTaggedSize) \
V(kPropertyListOffset, kTaggedSize) \
V(kPropertyAccessorsOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_TEST_CLASS_WITH_ALL_TYPES_FIELDS(V) \
V(kAOffset, kUInt8Size) \
V(kBOffset, kUInt8Size) \
V(kB2Offset, kUInt8Size) \
V(kB3Offset, kUInt8Size) \
V(kCOffset, kUInt16Size) \
V(kDOffset, kUInt16Size) \
V(kEOffset, kInt32Size) \
V(kFOffset, kInt32Size) \
V(kGOffset, kSystemPointerSize) \
V(kHOffset, kIntptrSize) \
V(kIOffset, kIntptrSize) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kEndOfStrongFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_THIN_STRING_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kActualOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_TUPLE2_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValue1Offset, kTaggedSize) \
V(kValue2Offset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_TUPLE3_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kValue3Offset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \

#define TORQUE_GENERATED_WASM_EXCEPTION_TAG_FIELDS(V) \
V(kStartOfPointerFieldsOffset, 0) \
V(kStartOfStrongFieldsOffset, 0) \
V(kIndexOffset, kTaggedSize) \
V(kEndOfStrongFieldsOffset, 0) \
V(kStartOfWeakFieldsOffset, 0) \
V(kEndOfWeakFieldsOffset, 0) \
V(kEndOfTaggedFieldsOffset, 0) \
V(kSize, 0) \


#endif  // V8_CLASS_BUILTIN_DEFINITIONS_FROM_DSL_H_