#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.String SR::Format(System.String,System.Object)
extern void SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829 (void);
// 0x00000002 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000003 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000004 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000005 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Select(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TResult>)
// 0x00000007 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000008 System.Func`2<TSource,TResult> System.Linq.Enumerable::CombineSelectors(System.Func`2<TSource,TMiddle>,System.Func`2<TMiddle,TResult>)
// 0x00000009 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectMany(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::SelectManyIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Collections.Generic.IEnumerable`1<TResult>>)
// 0x0000000B System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000C System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x0000000D System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Distinct(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::DistinctIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x0000000F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Union(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::UnionIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000011 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Except(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000012 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ExceptIterator(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000013 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Reverse(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000014 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::ReverseIterator(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000015 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000016 System.Boolean System.Linq.Enumerable::SequenceEqual(System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEnumerable`1<TSource>,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000017 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000018 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000019 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::Cast(System.Collections.IEnumerable)
// 0x0000001A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable::CastIterator(System.Collections.IEnumerable)
// 0x0000001B TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001C TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001D TSource System.Linq.Enumerable::FirstOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001E TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000001F TSource System.Linq.Enumerable::LastOrDefault(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000020 TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000022 System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000023 System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000024 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000025 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000026 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5 (void);
// 0x00000027 System.Int32 System.Linq.Enumerable::Sum(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x00000028 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<System.Int32>)
extern void Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D (void);
// 0x00000029 System.Int32 System.Linq.Enumerable::Max(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Int32>)
// 0x0000002A System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x0000002B TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x0000002C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x0000002D System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x0000002E System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x0000002F System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000030 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/Iterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000031 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000032 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x00000033 System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000034 System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x00000035 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000036 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x00000037 System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x00000038 System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000039 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereEnumerableIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003A System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x0000003B System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x0000003C System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x0000003D System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x0000003E System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereArrayIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x0000003F System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000040 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000041 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000042 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000043 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereListIterator`1::Select(System.Func`2<TSource,TResult>)
// 0x00000044 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000045 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000046 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Clone()
// 0x00000047 System.Void System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Dispose()
// 0x00000048 System.Boolean System.Linq.Enumerable/WhereSelectEnumerableIterator`2::MoveNext()
// 0x00000049 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004A System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectEnumerableIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x0000004B System.Void System.Linq.Enumerable/WhereSelectArrayIterator`2::.ctor(TSource[],System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x0000004C System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Clone()
// 0x0000004D System.Boolean System.Linq.Enumerable/WhereSelectArrayIterator`2::MoveNext()
// 0x0000004E System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectArrayIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x0000004F System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectArrayIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000050 System.Void System.Linq.Enumerable/WhereSelectListIterator`2::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,TResult>)
// 0x00000051 System.Linq.Enumerable/Iterator`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Clone()
// 0x00000052 System.Boolean System.Linq.Enumerable/WhereSelectListIterator`2::MoveNext()
// 0x00000053 System.Collections.Generic.IEnumerable`1<TResult2> System.Linq.Enumerable/WhereSelectListIterator`2::Select(System.Func`2<TResult,TResult2>)
// 0x00000054 System.Collections.Generic.IEnumerable`1<TResult> System.Linq.Enumerable/WhereSelectListIterator`2::Where(System.Func`2<TResult,System.Boolean>)
// 0x00000055 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x00000056 System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x00000057 System.Void System.Linq.Enumerable/<>c__DisplayClass7_0`3::.ctor()
// 0x00000058 TResult System.Linq.Enumerable/<>c__DisplayClass7_0`3::<CombineSelectors>b__0(TSource)
// 0x00000059 System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::.ctor(System.Int32)
// 0x0000005A System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.IDisposable.Dispose()
// 0x0000005B System.Boolean System.Linq.Enumerable/<SelectManyIterator>d__17`2::MoveNext()
// 0x0000005C System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally1()
// 0x0000005D System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::<>m__Finally2()
// 0x0000005E TResult System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000005F System.Void System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.Reset()
// 0x00000060 System.Object System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerator.get_Current()
// 0x00000061 System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x00000062 System.Collections.IEnumerator System.Linq.Enumerable/<SelectManyIterator>d__17`2::System.Collections.IEnumerable.GetEnumerator()
// 0x00000063 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::.ctor(System.Int32)
// 0x00000064 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.IDisposable.Dispose()
// 0x00000065 System.Boolean System.Linq.Enumerable/<DistinctIterator>d__68`1::MoveNext()
// 0x00000066 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::<>m__Finally1()
// 0x00000067 TSource System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000068 System.Void System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.Reset()
// 0x00000069 System.Object System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerator.get_Current()
// 0x0000006A System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000006B System.Collections.IEnumerator System.Linq.Enumerable/<DistinctIterator>d__68`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000006C System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::.ctor(System.Int32)
// 0x0000006D System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.IDisposable.Dispose()
// 0x0000006E System.Boolean System.Linq.Enumerable/<UnionIterator>d__71`1::MoveNext()
// 0x0000006F System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally1()
// 0x00000070 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::<>m__Finally2()
// 0x00000071 TSource System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000072 System.Void System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.Reset()
// 0x00000073 System.Object System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerator.get_Current()
// 0x00000074 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000075 System.Collections.IEnumerator System.Linq.Enumerable/<UnionIterator>d__71`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000076 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::.ctor(System.Int32)
// 0x00000077 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.IDisposable.Dispose()
// 0x00000078 System.Boolean System.Linq.Enumerable/<ExceptIterator>d__77`1::MoveNext()
// 0x00000079 System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::<>m__Finally1()
// 0x0000007A TSource System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x0000007B System.Void System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.Reset()
// 0x0000007C System.Object System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerator.get_Current()
// 0x0000007D System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x0000007E System.Collections.IEnumerator System.Linq.Enumerable/<ExceptIterator>d__77`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000007F System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::.ctor(System.Int32)
// 0x00000080 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.IDisposable.Dispose()
// 0x00000081 System.Boolean System.Linq.Enumerable/<ReverseIterator>d__79`1::MoveNext()
// 0x00000082 TSource System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerator<TSource>.get_Current()
// 0x00000083 System.Void System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.Reset()
// 0x00000084 System.Object System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerator.get_Current()
// 0x00000085 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.Generic.IEnumerable<TSource>.GetEnumerator()
// 0x00000086 System.Collections.IEnumerator System.Linq.Enumerable/<ReverseIterator>d__79`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000087 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::.ctor(System.Int32)
// 0x00000088 System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.IDisposable.Dispose()
// 0x00000089 System.Boolean System.Linq.Enumerable/<CastIterator>d__99`1::MoveNext()
// 0x0000008A System.Void System.Linq.Enumerable/<CastIterator>d__99`1::<>m__Finally1()
// 0x0000008B TResult System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerator<TResult>.get_Current()
// 0x0000008C System.Void System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.Reset()
// 0x0000008D System.Object System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerator.get_Current()
// 0x0000008E System.Collections.Generic.IEnumerator`1<TResult> System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.Generic.IEnumerable<TResult>.GetEnumerator()
// 0x0000008F System.Collections.IEnumerator System.Linq.Enumerable/<CastIterator>d__99`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000090 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000091 System.Void System.Linq.Set`1::.ctor(System.Collections.Generic.IEqualityComparer`1<TElement>)
// 0x00000092 System.Boolean System.Linq.Set`1::Add(TElement)
// 0x00000093 System.Boolean System.Linq.Set`1::Find(TElement,System.Boolean)
// 0x00000094 System.Void System.Linq.Set`1::Resize()
// 0x00000095 System.Int32 System.Linq.Set`1::InternalGetHashCode(TElement)
// 0x00000096 System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x00000097 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000098 System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000099 System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000009A System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x0000009B System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x0000009C System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x0000009D System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x0000009E TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x0000009F System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x000000A0 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x000000A1 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x000000A2 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A3 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x000000A4 System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x000000A5 System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x000000A6 System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x000000A7 System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x000000A8 System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x000000A9 System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x000000AA System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x000000AB System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x000000AC TElement[] System.Linq.Buffer`1::ToArray()
// 0x000000AD System.Linq.Expressions.ExpressionType System.Linq.Expressions.Expression::get_NodeType()
extern void Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A (void);
// 0x000000AE System.Void System.Linq.Expressions.Expression::.cctor()
extern void Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3 (void);
// 0x000000AF System.Exception System.Linq.Expressions.Error::ExtensionNodeMustOverrideProperty(System.Object)
extern void Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE (void);
// 0x000000B0 System.Linq.Expressions.Expression System.Linq.Expressions.LambdaExpression::get_Body()
extern void LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042 (void);
// 0x000000B1 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::get_Member()
extern void MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C (void);
// 0x000000B2 System.Linq.Expressions.Expression System.Linq.Expressions.MemberExpression::get_Expression()
extern void MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A (void);
// 0x000000B3 System.Reflection.MemberInfo System.Linq.Expressions.MemberExpression::GetMember()
extern void MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87 (void);
// 0x000000B4 System.String System.Linq.Expressions.Strings::ExtensionNodeMustOverrideProperty(System.Object)
extern void Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC (void);
// 0x000000B5 System.Void System.Dynamic.Utils.CacheDict`2::.ctor(System.Int32)
// 0x000000B6 System.Int32 System.Dynamic.Utils.CacheDict`2::AlignSize(System.Int32)
// 0x000000B7 System.Exception System.Dynamic.Utils.ContractUtils::get_Unreachable()
extern void ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D (void);
// 0x000000B8 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x000000B9 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BA System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000BB System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x000000BC System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000BD System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x000000BE System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x000000BF System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x000000C0 System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x000000C1 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x000000C2 System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x000000C3 System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x000000C4 System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x000000C5 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x000000C6 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x000000C7 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x000000C8 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x000000C9 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x000000CA System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x000000CB System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CC System.Void System.Collections.Generic.HashSet`1::ExceptWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x000000CD System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x000000CE System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x000000CF System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x000000D0 System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x000000D1 System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x000000D2 System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x000000D3 System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x000000D4 System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x000000D5 System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x000000D6 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x000000D7 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x000000D8 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x000000D9 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x000000DA System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x000000DB T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x000000DC System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x000000DD System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[221] = 
{
	SR_Format_m7A21873FD59FBF9CD36B4F733BB49D1F470F8829,
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Enumerable_Sum_m6CFC8CEAC70AE3C469A5D1993FAF8EEEC6A06FB5,
	NULL,
	Enumerable_Max_mE02EED2C10C2F8F0B2DCE468C87EF3064E854A8D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	Expression_get_NodeType_m46D2F5DD4F481536355CF1096212D8BD011EFA6A,
	Expression__cctor_m69557D69429E0BF3BEDD70DD10F659876E6968E3,
	Error_ExtensionNodeMustOverrideProperty_mAC352E09338C9957B04ECD67B350317839E2C9DE,
	LambdaExpression_get_Body_m595A485419E2F0AA13FC2695DEBD99ED9712D042,
	MemberExpression_get_Member_m42D967F01204B3337C76BC2C679C42922ACF2D2C,
	MemberExpression_get_Expression_mF45071AA01F3FD9644B8047DC9EFFBBF3895D03A,
	MemberExpression_GetMember_mC6C63FFBC40F36F3C693E15A7CFB8EBCEBCE0D87,
	Strings_ExtensionNodeMustOverrideProperty_m6E6F9F848EDD10684FF52BF21D95D84983E92CFC,
	NULL,
	NULL,
	ContractUtils_get_Unreachable_m814C0ABAB566942A64D62EE4BF63B9C75B8BDF5D,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[221] = 
{
	3181,
	3470,
	3582,
	3582,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	3422,
	-1,
	3422,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	2289,
	3600,
	3470,
	2303,
	2303,
	2303,
	2303,
	3470,
	-1,
	-1,
	3582,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[67] = 
{
	{ 0x02000005, { 100, 4 } },
	{ 0x02000006, { 104, 9 } },
	{ 0x02000007, { 115, 7 } },
	{ 0x02000008, { 124, 10 } },
	{ 0x02000009, { 136, 11 } },
	{ 0x0200000A, { 150, 9 } },
	{ 0x0200000B, { 162, 12 } },
	{ 0x0200000C, { 177, 1 } },
	{ 0x0200000D, { 178, 2 } },
	{ 0x0200000E, { 180, 12 } },
	{ 0x0200000F, { 192, 11 } },
	{ 0x02000010, { 203, 12 } },
	{ 0x02000011, { 215, 11 } },
	{ 0x02000012, { 226, 6 } },
	{ 0x02000013, { 232, 6 } },
	{ 0x02000015, { 238, 8 } },
	{ 0x02000017, { 246, 3 } },
	{ 0x02000018, { 251, 5 } },
	{ 0x02000019, { 256, 7 } },
	{ 0x0200001A, { 263, 3 } },
	{ 0x0200001B, { 266, 7 } },
	{ 0x0200001C, { 273, 4 } },
	{ 0x02000027, { 277, 3 } },
	{ 0x0200002A, { 280, 36 } },
	{ 0x0200002C, { 316, 2 } },
	{ 0x06000005, { 0, 10 } },
	{ 0x06000006, { 10, 10 } },
	{ 0x06000007, { 20, 5 } },
	{ 0x06000008, { 25, 5 } },
	{ 0x06000009, { 30, 1 } },
	{ 0x0600000A, { 31, 2 } },
	{ 0x0600000B, { 33, 2 } },
	{ 0x0600000C, { 35, 1 } },
	{ 0x0600000D, { 36, 1 } },
	{ 0x0600000E, { 37, 2 } },
	{ 0x0600000F, { 39, 1 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 1 } },
	{ 0x06000012, { 43, 2 } },
	{ 0x06000013, { 45, 1 } },
	{ 0x06000014, { 46, 2 } },
	{ 0x06000015, { 48, 1 } },
	{ 0x06000016, { 49, 5 } },
	{ 0x06000017, { 54, 3 } },
	{ 0x06000018, { 57, 2 } },
	{ 0x06000019, { 59, 2 } },
	{ 0x0600001A, { 61, 2 } },
	{ 0x0600001B, { 63, 4 } },
	{ 0x0600001C, { 67, 4 } },
	{ 0x0600001D, { 71, 3 } },
	{ 0x0600001E, { 74, 4 } },
	{ 0x0600001F, { 78, 4 } },
	{ 0x06000020, { 82, 3 } },
	{ 0x06000021, { 85, 1 } },
	{ 0x06000022, { 86, 3 } },
	{ 0x06000023, { 89, 2 } },
	{ 0x06000024, { 91, 2 } },
	{ 0x06000025, { 93, 5 } },
	{ 0x06000027, { 98, 1 } },
	{ 0x06000029, { 99, 1 } },
	{ 0x06000039, { 113, 2 } },
	{ 0x0600003E, { 122, 2 } },
	{ 0x06000043, { 134, 2 } },
	{ 0x06000049, { 147, 3 } },
	{ 0x0600004E, { 159, 3 } },
	{ 0x06000053, { 174, 3 } },
	{ 0x06000099, { 249, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[318] = 
{
	{ (Il2CppRGCTXDataType)2, 2139 },
	{ (Il2CppRGCTXDataType)3, 8277 },
	{ (Il2CppRGCTXDataType)2, 3264 },
	{ (Il2CppRGCTXDataType)2, 2895 },
	{ (Il2CppRGCTXDataType)3, 15096 },
	{ (Il2CppRGCTXDataType)2, 2254 },
	{ (Il2CppRGCTXDataType)2, 2902 },
	{ (Il2CppRGCTXDataType)3, 15211 },
	{ (Il2CppRGCTXDataType)2, 2897 },
	{ (Il2CppRGCTXDataType)3, 15134 },
	{ (Il2CppRGCTXDataType)2, 2140 },
	{ (Il2CppRGCTXDataType)3, 8278 },
	{ (Il2CppRGCTXDataType)2, 3291 },
	{ (Il2CppRGCTXDataType)2, 2904 },
	{ (Il2CppRGCTXDataType)3, 15249 },
	{ (Il2CppRGCTXDataType)2, 2273 },
	{ (Il2CppRGCTXDataType)2, 2912 },
	{ (Il2CppRGCTXDataType)3, 15748 },
	{ (Il2CppRGCTXDataType)2, 2908 },
	{ (Il2CppRGCTXDataType)3, 15477 },
	{ (Il2CppRGCTXDataType)2, 734 },
	{ (Il2CppRGCTXDataType)3, 199 },
	{ (Il2CppRGCTXDataType)3, 200 },
	{ (Il2CppRGCTXDataType)2, 1356 },
	{ (Il2CppRGCTXDataType)3, 6311 },
	{ (Il2CppRGCTXDataType)2, 735 },
	{ (Il2CppRGCTXDataType)3, 223 },
	{ (Il2CppRGCTXDataType)3, 224 },
	{ (Il2CppRGCTXDataType)2, 1372 },
	{ (Il2CppRGCTXDataType)3, 6316 },
	{ (Il2CppRGCTXDataType)3, 18511 },
	{ (Il2CppRGCTXDataType)2, 754 },
	{ (Il2CppRGCTXDataType)3, 534 },
	{ (Il2CppRGCTXDataType)2, 2621 },
	{ (Il2CppRGCTXDataType)3, 12446 },
	{ (Il2CppRGCTXDataType)3, 7128 },
	{ (Il2CppRGCTXDataType)3, 18420 },
	{ (Il2CppRGCTXDataType)2, 741 },
	{ (Il2CppRGCTXDataType)3, 408 },
	{ (Il2CppRGCTXDataType)3, 18577 },
	{ (Il2CppRGCTXDataType)2, 758 },
	{ (Il2CppRGCTXDataType)3, 620 },
	{ (Il2CppRGCTXDataType)3, 18427 },
	{ (Il2CppRGCTXDataType)2, 745 },
	{ (Il2CppRGCTXDataType)3, 460 },
	{ (Il2CppRGCTXDataType)3, 18459 },
	{ (Il2CppRGCTXDataType)2, 752 },
	{ (Il2CppRGCTXDataType)3, 515 },
	{ (Il2CppRGCTXDataType)3, 18520 },
	{ (Il2CppRGCTXDataType)3, 5809 },
	{ (Il2CppRGCTXDataType)2, 1260 },
	{ (Il2CppRGCTXDataType)2, 1692 },
	{ (Il2CppRGCTXDataType)2, 1822 },
	{ (Il2CppRGCTXDataType)2, 1911 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)3, 1358 },
	{ (Il2CppRGCTXDataType)3, 1359 },
	{ (Il2CppRGCTXDataType)2, 2255 },
	{ (Il2CppRGCTXDataType)3, 9207 },
	{ (Il2CppRGCTXDataType)2, 1693 },
	{ (Il2CppRGCTXDataType)3, 18300 },
	{ (Il2CppRGCTXDataType)2, 739 },
	{ (Il2CppRGCTXDataType)3, 385 },
	{ (Il2CppRGCTXDataType)2, 2032 },
	{ (Il2CppRGCTXDataType)2, 1584 },
	{ (Il2CppRGCTXDataType)2, 1708 },
	{ (Il2CppRGCTXDataType)2, 1823 },
	{ (Il2CppRGCTXDataType)2, 2033 },
	{ (Il2CppRGCTXDataType)2, 1585 },
	{ (Il2CppRGCTXDataType)2, 1709 },
	{ (Il2CppRGCTXDataType)2, 1824 },
	{ (Il2CppRGCTXDataType)2, 1710 },
	{ (Il2CppRGCTXDataType)2, 1825 },
	{ (Il2CppRGCTXDataType)3, 6312 },
	{ (Il2CppRGCTXDataType)2, 2034 },
	{ (Il2CppRGCTXDataType)2, 1586 },
	{ (Il2CppRGCTXDataType)2, 1711 },
	{ (Il2CppRGCTXDataType)2, 1826 },
	{ (Il2CppRGCTXDataType)2, 2035 },
	{ (Il2CppRGCTXDataType)2, 1587 },
	{ (Il2CppRGCTXDataType)2, 1712 },
	{ (Il2CppRGCTXDataType)2, 1827 },
	{ (Il2CppRGCTXDataType)2, 1713 },
	{ (Il2CppRGCTXDataType)2, 1828 },
	{ (Il2CppRGCTXDataType)3, 6313 },
	{ (Il2CppRGCTXDataType)2, 1687 },
	{ (Il2CppRGCTXDataType)2, 1688 },
	{ (Il2CppRGCTXDataType)2, 1820 },
	{ (Il2CppRGCTXDataType)3, 6310 },
	{ (Il2CppRGCTXDataType)2, 1583 },
	{ (Il2CppRGCTXDataType)2, 1705 },
	{ (Il2CppRGCTXDataType)2, 1582 },
	{ (Il2CppRGCTXDataType)3, 18400 },
	{ (Il2CppRGCTXDataType)3, 5808 },
	{ (Il2CppRGCTXDataType)2, 1259 },
	{ (Il2CppRGCTXDataType)2, 1690 },
	{ (Il2CppRGCTXDataType)2, 1821 },
	{ (Il2CppRGCTXDataType)2, 1910 },
	{ (Il2CppRGCTXDataType)3, 18464 },
	{ (Il2CppRGCTXDataType)3, 18463 },
	{ (Il2CppRGCTXDataType)3, 8279 },
	{ (Il2CppRGCTXDataType)3, 8281 },
	{ (Il2CppRGCTXDataType)2, 489 },
	{ (Il2CppRGCTXDataType)3, 8280 },
	{ (Il2CppRGCTXDataType)3, 8289 },
	{ (Il2CppRGCTXDataType)2, 2143 },
	{ (Il2CppRGCTXDataType)2, 2898 },
	{ (Il2CppRGCTXDataType)3, 15135 },
	{ (Il2CppRGCTXDataType)3, 8290 },
	{ (Il2CppRGCTXDataType)2, 1767 },
	{ (Il2CppRGCTXDataType)2, 1858 },
	{ (Il2CppRGCTXDataType)3, 6324 },
	{ (Il2CppRGCTXDataType)3, 18304 },
	{ (Il2CppRGCTXDataType)2, 2909 },
	{ (Il2CppRGCTXDataType)3, 15478 },
	{ (Il2CppRGCTXDataType)3, 8282 },
	{ (Il2CppRGCTXDataType)2, 2142 },
	{ (Il2CppRGCTXDataType)2, 2896 },
	{ (Il2CppRGCTXDataType)3, 15097 },
	{ (Il2CppRGCTXDataType)3, 6323 },
	{ (Il2CppRGCTXDataType)3, 8283 },
	{ (Il2CppRGCTXDataType)3, 18303 },
	{ (Il2CppRGCTXDataType)2, 2905 },
	{ (Il2CppRGCTXDataType)3, 15250 },
	{ (Il2CppRGCTXDataType)3, 8296 },
	{ (Il2CppRGCTXDataType)2, 2144 },
	{ (Il2CppRGCTXDataType)2, 2903 },
	{ (Il2CppRGCTXDataType)3, 15212 },
	{ (Il2CppRGCTXDataType)3, 9255 },
	{ (Il2CppRGCTXDataType)3, 4617 },
	{ (Il2CppRGCTXDataType)3, 6325 },
	{ (Il2CppRGCTXDataType)3, 4616 },
	{ (Il2CppRGCTXDataType)3, 8297 },
	{ (Il2CppRGCTXDataType)3, 18305 },
	{ (Il2CppRGCTXDataType)2, 2913 },
	{ (Il2CppRGCTXDataType)3, 15749 },
	{ (Il2CppRGCTXDataType)3, 8310 },
	{ (Il2CppRGCTXDataType)2, 2146 },
	{ (Il2CppRGCTXDataType)2, 2911 },
	{ (Il2CppRGCTXDataType)3, 15480 },
	{ (Il2CppRGCTXDataType)3, 8311 },
	{ (Il2CppRGCTXDataType)2, 1770 },
	{ (Il2CppRGCTXDataType)2, 1861 },
	{ (Il2CppRGCTXDataType)3, 6329 },
	{ (Il2CppRGCTXDataType)3, 6328 },
	{ (Il2CppRGCTXDataType)2, 2900 },
	{ (Il2CppRGCTXDataType)3, 15137 },
	{ (Il2CppRGCTXDataType)3, 18318 },
	{ (Il2CppRGCTXDataType)2, 2910 },
	{ (Il2CppRGCTXDataType)3, 15479 },
	{ (Il2CppRGCTXDataType)3, 8303 },
	{ (Il2CppRGCTXDataType)2, 2145 },
	{ (Il2CppRGCTXDataType)2, 2907 },
	{ (Il2CppRGCTXDataType)3, 15252 },
	{ (Il2CppRGCTXDataType)3, 6327 },
	{ (Il2CppRGCTXDataType)3, 6326 },
	{ (Il2CppRGCTXDataType)3, 8304 },
	{ (Il2CppRGCTXDataType)2, 2899 },
	{ (Il2CppRGCTXDataType)3, 15136 },
	{ (Il2CppRGCTXDataType)3, 18317 },
	{ (Il2CppRGCTXDataType)2, 2906 },
	{ (Il2CppRGCTXDataType)3, 15251 },
	{ (Il2CppRGCTXDataType)3, 8317 },
	{ (Il2CppRGCTXDataType)2, 2147 },
	{ (Il2CppRGCTXDataType)2, 2915 },
	{ (Il2CppRGCTXDataType)3, 15751 },
	{ (Il2CppRGCTXDataType)3, 9256 },
	{ (Il2CppRGCTXDataType)3, 4619 },
	{ (Il2CppRGCTXDataType)3, 6331 },
	{ (Il2CppRGCTXDataType)3, 6330 },
	{ (Il2CppRGCTXDataType)3, 4618 },
	{ (Il2CppRGCTXDataType)3, 8318 },
	{ (Il2CppRGCTXDataType)2, 2901 },
	{ (Il2CppRGCTXDataType)3, 15138 },
	{ (Il2CppRGCTXDataType)3, 18319 },
	{ (Il2CppRGCTXDataType)2, 2914 },
	{ (Il2CppRGCTXDataType)3, 15750 },
	{ (Il2CppRGCTXDataType)3, 6320 },
	{ (Il2CppRGCTXDataType)3, 6321 },
	{ (Il2CppRGCTXDataType)3, 6332 },
	{ (Il2CppRGCTXDataType)3, 537 },
	{ (Il2CppRGCTXDataType)3, 536 },
	{ (Il2CppRGCTXDataType)2, 1759 },
	{ (Il2CppRGCTXDataType)2, 1852 },
	{ (Il2CppRGCTXDataType)3, 6322 },
	{ (Il2CppRGCTXDataType)2, 1778 },
	{ (Il2CppRGCTXDataType)2, 1874 },
	{ (Il2CppRGCTXDataType)3, 539 },
	{ (Il2CppRGCTXDataType)2, 648 },
	{ (Il2CppRGCTXDataType)2, 755 },
	{ (Il2CppRGCTXDataType)3, 535 },
	{ (Il2CppRGCTXDataType)3, 538 },
	{ (Il2CppRGCTXDataType)3, 410 },
	{ (Il2CppRGCTXDataType)2, 2716 },
	{ (Il2CppRGCTXDataType)3, 13964 },
	{ (Il2CppRGCTXDataType)2, 1750 },
	{ (Il2CppRGCTXDataType)2, 1847 },
	{ (Il2CppRGCTXDataType)3, 13965 },
	{ (Il2CppRGCTXDataType)3, 412 },
	{ (Il2CppRGCTXDataType)2, 480 },
	{ (Il2CppRGCTXDataType)2, 742 },
	{ (Il2CppRGCTXDataType)3, 409 },
	{ (Il2CppRGCTXDataType)3, 411 },
	{ (Il2CppRGCTXDataType)3, 622 },
	{ (Il2CppRGCTXDataType)3, 623 },
	{ (Il2CppRGCTXDataType)2, 2720 },
	{ (Il2CppRGCTXDataType)3, 13968 },
	{ (Il2CppRGCTXDataType)2, 1762 },
	{ (Il2CppRGCTXDataType)2, 1854 },
	{ (Il2CppRGCTXDataType)3, 13969 },
	{ (Il2CppRGCTXDataType)3, 625 },
	{ (Il2CppRGCTXDataType)2, 487 },
	{ (Il2CppRGCTXDataType)2, 759 },
	{ (Il2CppRGCTXDataType)3, 621 },
	{ (Il2CppRGCTXDataType)3, 624 },
	{ (Il2CppRGCTXDataType)3, 462 },
	{ (Il2CppRGCTXDataType)2, 2718 },
	{ (Il2CppRGCTXDataType)3, 13966 },
	{ (Il2CppRGCTXDataType)2, 1753 },
	{ (Il2CppRGCTXDataType)2, 1849 },
	{ (Il2CppRGCTXDataType)3, 13967 },
	{ (Il2CppRGCTXDataType)3, 464 },
	{ (Il2CppRGCTXDataType)2, 482 },
	{ (Il2CppRGCTXDataType)2, 746 },
	{ (Il2CppRGCTXDataType)3, 461 },
	{ (Il2CppRGCTXDataType)3, 463 },
	{ (Il2CppRGCTXDataType)2, 940 },
	{ (Il2CppRGCTXDataType)3, 1360 },
	{ (Il2CppRGCTXDataType)2, 484 },
	{ (Il2CppRGCTXDataType)2, 753 },
	{ (Il2CppRGCTXDataType)3, 516 },
	{ (Il2CppRGCTXDataType)3, 517 },
	{ (Il2CppRGCTXDataType)3, 387 },
	{ (Il2CppRGCTXDataType)2, 478 },
	{ (Il2CppRGCTXDataType)3, 389 },
	{ (Il2CppRGCTXDataType)2, 740 },
	{ (Il2CppRGCTXDataType)3, 386 },
	{ (Il2CppRGCTXDataType)3, 388 },
	{ (Il2CppRGCTXDataType)3, 5842 },
	{ (Il2CppRGCTXDataType)2, 1274 },
	{ (Il2CppRGCTXDataType)2, 3365 },
	{ (Il2CppRGCTXDataType)3, 13961 },
	{ (Il2CppRGCTXDataType)3, 13962 },
	{ (Il2CppRGCTXDataType)2, 1927 },
	{ (Il2CppRGCTXDataType)3, 13963 },
	{ (Il2CppRGCTXDataType)2, 389 },
	{ (Il2CppRGCTXDataType)2, 749 },
	{ (Il2CppRGCTXDataType)3, 488 },
	{ (Il2CppRGCTXDataType)3, 12433 },
	{ (Il2CppRGCTXDataType)2, 2622 },
	{ (Il2CppRGCTXDataType)3, 12447 },
	{ (Il2CppRGCTXDataType)2, 942 },
	{ (Il2CppRGCTXDataType)3, 1361 },
	{ (Il2CppRGCTXDataType)3, 12439 },
	{ (Il2CppRGCTXDataType)3, 4594 },
	{ (Il2CppRGCTXDataType)2, 512 },
	{ (Il2CppRGCTXDataType)3, 12434 },
	{ (Il2CppRGCTXDataType)2, 2618 },
	{ (Il2CppRGCTXDataType)3, 1405 },
	{ (Il2CppRGCTXDataType)2, 957 },
	{ (Il2CppRGCTXDataType)2, 1242 },
	{ (Il2CppRGCTXDataType)3, 4600 },
	{ (Il2CppRGCTXDataType)3, 12435 },
	{ (Il2CppRGCTXDataType)3, 4589 },
	{ (Il2CppRGCTXDataType)3, 4590 },
	{ (Il2CppRGCTXDataType)3, 4588 },
	{ (Il2CppRGCTXDataType)3, 4591 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)2, 3342 },
	{ (Il2CppRGCTXDataType)3, 6318 },
	{ (Il2CppRGCTXDataType)3, 4593 },
	{ (Il2CppRGCTXDataType)2, 1671 },
	{ (Il2CppRGCTXDataType)3, 4592 },
	{ (Il2CppRGCTXDataType)2, 1589 },
	{ (Il2CppRGCTXDataType)2, 3294 },
	{ (Il2CppRGCTXDataType)2, 1728 },
	{ (Il2CppRGCTXDataType)2, 1829 },
	{ (Il2CppRGCTXDataType)3, 1380 },
	{ (Il2CppRGCTXDataType)2, 944 },
	{ (Il2CppRGCTXDataType)2, 3345 },
	{ (Il2CppRGCTXDataType)3, 5825 },
	{ (Il2CppRGCTXDataType)2, 1268 },
	{ (Il2CppRGCTXDataType)3, 6867 },
	{ (Il2CppRGCTXDataType)3, 6868 },
	{ (Il2CppRGCTXDataType)2, 1552 },
	{ (Il2CppRGCTXDataType)3, 6871 },
	{ (Il2CppRGCTXDataType)2, 1552 },
	{ (Il2CppRGCTXDataType)3, 6873 },
	{ (Il2CppRGCTXDataType)2, 1590 },
	{ (Il2CppRGCTXDataType)3, 6877 },
	{ (Il2CppRGCTXDataType)3, 6882 },
	{ (Il2CppRGCTXDataType)3, 6881 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)3, 6870 },
	{ (Il2CppRGCTXDataType)3, 6869 },
	{ (Il2CppRGCTXDataType)3, 6878 },
	{ (Il2CppRGCTXDataType)2, 1922 },
	{ (Il2CppRGCTXDataType)3, 6875 },
	{ (Il2CppRGCTXDataType)3, 18940 },
	{ (Il2CppRGCTXDataType)2, 1243 },
	{ (Il2CppRGCTXDataType)3, 4610 },
	{ (Il2CppRGCTXDataType)1, 1668 },
	{ (Il2CppRGCTXDataType)2, 3302 },
	{ (Il2CppRGCTXDataType)3, 6874 },
	{ (Il2CppRGCTXDataType)1, 3302 },
	{ (Il2CppRGCTXDataType)1, 1922 },
	{ (Il2CppRGCTXDataType)2, 3363 },
	{ (Il2CppRGCTXDataType)2, 3302 },
	{ (Il2CppRGCTXDataType)2, 1731 },
	{ (Il2CppRGCTXDataType)2, 1832 },
	{ (Il2CppRGCTXDataType)3, 6872 },
	{ (Il2CppRGCTXDataType)3, 6879 },
	{ (Il2CppRGCTXDataType)3, 6880 },
	{ (Il2CppRGCTXDataType)3, 6876 },
	{ (Il2CppRGCTXDataType)3, 6883 },
	{ (Il2CppRGCTXDataType)2, 333 },
	{ (Il2CppRGCTXDataType)3, 4620 },
	{ (Il2CppRGCTXDataType)2, 500 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	221,
	s_methodPointers,
	s_InvokerIndices,
	0,
	NULL,
	67,
	s_rgctxIndices,
	318,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
